#include <stdio.h>

int main()
{
    int i,k,t,n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        k=n%12;
                if(k==1)
                printf("%d WS\n",n+11);
                else if(k==2)
                printf("%d MS\n",n+9);
                else if(k==3)
                printf("%d AS\n",n+7);
                else if(k==4)
                printf("%d AS\n",n+5);
                else if(k==5)
                printf("%d MS\n",n+3);
                else if(k==6)
                printf("%d WS\n",n+1);

                else if(k==7)
                printf("%d WS\n",n-1);
                else if(k==8)
                printf("%d MS\n",n-3);
                else if(k==9)
                printf("%d AS\n",n-5);
                else if(k==10)
                printf("%d AS\n",n-7);
                else if(k==11)
                printf("%d MS\n",n-9);
                else if(k==0)
                printf("%d WS\n",n-11);

    }
    return 0;
}
