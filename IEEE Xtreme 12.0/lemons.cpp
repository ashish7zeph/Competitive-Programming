#include<iostream>
using namespace std;
int main()
{
    int n,m,s;
    cin>>n>>m>>s;
    int r,l,mid,res=0;
    r=1;
    l=n;

    while(l>r)
    {
        if((l-r)%2==0)
        mid=(l+r)/2;
        else{
            mid=(l+r)/2+1;
        }
        res+=(mid-r)*m+s;
        r=mid;
    }
    cout<<res<<endl;
    return 0;

}