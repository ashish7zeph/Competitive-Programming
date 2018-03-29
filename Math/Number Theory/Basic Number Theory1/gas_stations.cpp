#include <iostream>
using namespace std;

int main()
{
    long long n,x,i,c=0;
    cin >> n >> x;
    long long a[n];
    for(i=0; i<n; i++)
        cin >> a[i];
    for(i=0; i<n && x>=0; i++)
    {
        x -=a[i];
        c++;
    }
    cout << c;
    
    return 0;
}
