#include <iostream>
using namespace std;

int main()
{
    long long i,a=0,b=0;
    string s;
    cin>>s;
    for(i=0; i<s.size(); i++)
    {
        if(s[i]=='L')
        a--;
        else if(s[i]=='R')
        a++;
        else if(s[i]=='U')
        b++;
        else if(s[i]=='D')
        b--;
    }
    cout<<a<<" "<<b;
    return 0;
}
