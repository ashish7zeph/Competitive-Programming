#include <iostream>
using namespace std;

int main()
{
    long long i,t,j,n;
    cin >> t;
    for(i=0; i<t; i++)
    {
        cin >> n;
        long long sum = n-1;
        for(j=n-2; j>1; j-=2)
            sum += 2*j;
        if(n % 2 != 0)
            sum += 1;
        if(n == 1)
            cout << '1' << endl;
        else
            cout << sum << endl;
    }
    return 0;
}
