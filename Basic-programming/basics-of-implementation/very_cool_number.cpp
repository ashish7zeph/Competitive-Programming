#include <iostream>
using namespace std;
long long checkcool(long long n)
{
    long long count=0;
    while(n!=0)
    {
        if( ((n&7)!=7) && ((n&5)==5) )
           count++;
        n = n>>1;
    }
    return count;
}

int main()
{
    long long i,j,t,r,k,c;
    cin >> t;
    for(i=0; i<t; i++)
    {
        cin >> r >> k;
        c=0;
        for(j=1; j<=r; j++)
        {
            if(checkcool(j)>=k)
                c++;
        }
    cout << c <<endl;
    }

    return 0;
}
