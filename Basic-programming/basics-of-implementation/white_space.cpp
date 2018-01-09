#include <iostream>
using namespace std;

int main()
{
    string s;
    int c=0,i;
    getline(cin,s);
    for(i=0; i<s.size(); i++)
        if(s[i]==' ')
            c++;
    cout<<c;        
    return 0;
}
