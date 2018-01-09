#include <stdio.h>
long rev(long);
int main()
{
    int t,i;
    long a,b,c;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld %ld",&a,&b);
        c=rev(a)+rev(b);
        printf("%ld\n",rev(c));
    }
    return 0;
}
long rev(long n)
{long r,y=0;
    while(n!=0)
    {
        r=n%10;
        y=y*10+r;
        n=n/10;
    } return y;
}
