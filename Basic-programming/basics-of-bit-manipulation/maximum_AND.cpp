#include <iostream>
#define lli long long
using namespace std;

int main()
{
    lli t, i, a, b, c;
    cin >> t;
    for(i=0; i<t; i++){
        cin >> a >> b;
        if(b - a == 1)
            c = b & a;
        else if( b % 2 == 0 )
            b--;
        c = b & (b-1);
        cout << c << endl;
    }
    return 0;
}
