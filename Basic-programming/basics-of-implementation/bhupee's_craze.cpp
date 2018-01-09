#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main(){
    int i,t,n,j,k,l,c;
    string s,s1,s2,s3;
    cin>>t;
    for(i=0;i<t;i++)
    {   cin>>n;
    if(n==0)
    cout<<s1<<endl;
        for(j=0;j<n;j++)
            {
                cin>>s;
                s2=s;
                for(k=0;k<s.size()-1;k++)
                {
                    for(l=k+1;l<s.size();l++)
                    {
                        if(s[k]==s[l])
                            {s.erase(s.begin()+l);
                            l=l-1;}
                    }
                }
               if(j==0)
                    {s1=s2;
                    c=s.size();}

                if(s.size()<=c && j>=1)
                {
                    s1.clear();
                    s1=s2;
                    c=s.size();
                }
                if(j==n-1)
                    cout<<s1<<"\n";
                    
            }
    }
    return 0;
}
