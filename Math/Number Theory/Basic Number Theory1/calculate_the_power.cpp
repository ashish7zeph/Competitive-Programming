#include <iostream>
#define lli long long
using namespace std;
lli power(lli a,lli b)
{
    int m = 1000000007;
    if(b == 0)
        return 1;
    else if(b % 2 == 0)
        return power((a*a)%m,b/2);
    else
        return (a*power((a*a)%m,(b-1)/2))%m;
}

int main()
{
    lli a,b,i;
    cin >> a >> b;
    cout << power(a,b);
    return 0;
}
