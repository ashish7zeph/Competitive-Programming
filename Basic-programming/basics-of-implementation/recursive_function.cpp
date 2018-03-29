#include <iostream>
#define lli long long
using namespace std;
lli F(lli x, lli y){
    if(x == 0)
        return (y+1)%1000;
    else if(x > 0 && y == 0)
        return F(x-1, 1)%1000;
    else if(x > 0 && y > 0)
        return F(x-1, F(x, y-1));
}

int main()
{
    lli x, y, k=0, z, a[3], i;
    cin >> x >> y;
    z = F(x, y);
    while(k <3){
        if(z % 10== 0)
            a[k] = 0;
        else
            a[k] = z % 10;
        z /= 10;
        k++;
    }
    for(i=2; i>=0; i--){
        cout << a[i];
    }
    return 0;
}
