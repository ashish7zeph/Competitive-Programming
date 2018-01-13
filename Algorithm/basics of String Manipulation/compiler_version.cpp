#include <iostream>
#define ret "return 0;"
using namespace std;

int main()
{
    int i=0,j,k;
    string s;
    while(getline(cin>>ws,s))
    {
        
        for(j=0; j<s.size() && (s[j]!='/' || s[j+1]!='/'); j++)
        {
            if(s[j]=='-' && s[j+1]=='>')
            {
                s[j]='.';
                s.erase(s.begin()+(j+1));
            }
        }
        cout << s << endl;
        i++;
    }
    return 0;
}
