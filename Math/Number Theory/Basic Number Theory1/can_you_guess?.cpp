#include <iostream>
using namespace std;

int main()
{
   long long t,i,n,c,j;
    cin >> t;
    for(i=0; i<t; i++)
    {
        cin >> n;
        c = 0;
        for(j=1; j<n; j++)
        {
            if(n % j == 0)
                c += j;
        }
        cout << c << endl;
    }
    return 0;
}
