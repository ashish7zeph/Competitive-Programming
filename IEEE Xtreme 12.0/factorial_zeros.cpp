#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#include<math.h>
int basezero(int a , int b)
{
    long long int noz,i,j,p,c,k;
          noz=a;
          j=b;
          for (i=2;i<=b;i++)
          {
              if (j%i==0)
              {
                 p=0;
                 while (j%i==0)
                 {
                       p++;
                       j/=i;
                 }
                 c=0;
                 k=a;
                 while (k/i>0)
                 {
                       c+=k/i;
                       k/=i;
                 }
                 noz=min(noz,c/p);
              }
          }
          return(noz);

}
int main()
{
    long long int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        long long int x,y,z,result,cinny=0;
        cin>>x>>y;
        for(z=2;z<100000;z++)
        {
            result=basezero(z,x);
            if(result==y)
            {
                cout<<z<<endl;
                cinny++;
                break;
            }
        }
        if(cinny==0)
            cout<<"-1"<<endl;
    }
}

