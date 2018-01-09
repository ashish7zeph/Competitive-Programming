#include <iostream>
using namespace std;

int main()
{
    int i,c=0;
    string s;
    cin>>s;
    for(i=0; i<s.size(); i++)
    {
        c+=(s[i]%96);
    }
    cout<<c;
    return 0;
}
