#include <iostream>
using namespace std;
int main()
{
    long long i,t,j,n,k,x=1;
    cin >> t;
    for(i=0; i<t; i++)
    {
        cin >> n >> k;
        x=1;
        for(j=0;j<n;j++){
            x*=k--;
            x=x%1000000007;
        }
        cout<<x<<endl;
    }
    return 0;
}
