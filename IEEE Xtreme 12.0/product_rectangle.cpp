#include <stdio.h>
#include <string.h>
#include <iostream>
#include <vector>
#include <limits.h>
long long row, col;
using namespace std;
vector<long long> *M;
#define inchar          getchar_unlocked
#define outchar(x)      putchar_unlocked(x)
long long kadane(long long* arr, long long* start, long long* finish, long long n)
{
 long long sum = 0, maxSum = INT_MIN, i;
 *finish = -1;
 long long local_start = 0;
 for (i = 0; i < n; ++i)
 {
  sum += arr[i];
  if (sum < 0)
  {
   sum = 0;
   local_start = i+1;
  }
  else if (sum > maxSum)
  {
   maxSum = sum;
   *start = local_start;
   *finish = i;
  }
 }
 if (*finish != -1)
  return maxSum;
 maxSum = arr[0];
 *start = *finish = 0;
 for (i = 1; i < n; i++)
 {
  if (arr[i] > maxSum)
  {
   maxSum = arr[i];
   *start = *finish = i;
  }
 }
 return maxSum;
}
void findMaxSum()
{
 long long maxSum = INT_MIN;
 long long left, right, i;
 long long temp[row], sum, start, finish;
 for (left = 0; left < col; ++left)
 {
  memset(temp, 0, sizeof(temp));
  for (right = left; right < col; ++right)
  {
   for (i = 0; i < row; ++i)
    temp[i] += M[i][right];
   sum = kadane(temp, &start, &finish, row);
   if (sum > maxSum)
   {
    maxSum = sum;
    
   }
  }
 }
 printf("%lld", maxSum);
}
int main()
{
 long long n, m, x;
 vector<long long> owne, sec;
    cin >> n >> m;
    row = n;
    col = m;
    M = new vector<long long> [row];
    for(long long i = 0; i < n; i++){
        cin >> x;
        owne.push_back(x);
    }
    for(long long i = 0; i < m; i++){
        cin >> x;
        sec.push_back(x);
    }
    for(long long i = 0; i < n; i++){
        for(long long j = 0; j < m; j++){
            M[i].push_back(owne.at(i)*sec.at(j));
        }
    }
 findMaxSum();
 return 0;
}

