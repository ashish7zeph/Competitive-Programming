#include <iostream>
using namespace std;

int main()
{
    long long i,j,t,c,n;
    cin >> t;
    for(i=0; i<t; i++)
    {
        c=0;
        cin >> n;
        if(n == 0 || n == 1 || n == 2)
            c = 0;
        else
            c = n*(n-3)/2;
        cout << c << endl;
    }
    return 0;
}
