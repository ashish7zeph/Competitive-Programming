#include <stdio.h>
void prime(int);
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=2;i<=n;i++){
    prime(i);
    }
    return 0;
}
void prime(int x)
{
    int i,r=0;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {r=1;
        break;}
    }
    if(r==0)
    printf("%d ",x);
}
