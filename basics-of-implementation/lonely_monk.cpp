#include <iostream>
using namespace std;

int main()
{
    long long n,i,even = 0,odd = 0,count;
    cin >> n;
    long long arr[n] = {0};
    for(i=1; i<=n; ++i){
        cin >> arr[i];
        arr[i] += arr[i-1];
        if(arr[i]%2 == 0)
            even++;
        else
            odd++;
    }
    
count = (even*(even-1))/2 + even + (odd*(odd-1))/2;
cout << count << endl;
    
    return 0;
}
