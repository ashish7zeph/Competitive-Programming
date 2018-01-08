#include <stdio.h>
int prime(int);
int main()
{
    int k,i,j,t,c,n;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        scanf("%d",&n);
        char a[500];
        scanf("%s",a);
        for(i=0;i<n;i++)
        {
          c=1;
          j=1;
          while(c)
          {
              if(a[i]<65 || a[i]>128)
              { a[i]='C';
              c=0;}
              if(prime(a[i]))
                c=0;
              else if((prime(a[i]-j)) && (a[i]-j>=65))
              {
                  a[i]=a[i]-j;
                  c=0;
              }
              else if((prime(a[i]+j)) && (a[i]+j<=122))
              {
                  a[i]=a[i]+j;
                  c=0;
              }
              j++;
          }
        }
            printf("%s\n",a);
    }
    return 0;
}
int prime(int x)
{
    int i,j,r=0;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            r=1;
            break;
        }

    }
    if(r==0)
    return 1;
    else
    return 0;
}
