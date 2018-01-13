#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i,t,j;
    cin >> t;
    for(i=0; i<t; i++)
    {
        string s;
        getline(cin >> ws,s);

        for(j=0; j<s.size(); j++)
        {
            if(s[j] == ' ')
                cout << '$';
            else if(s[j]>=97 && s[j]<=122)
                cout << s[j] % 96;
            else if(s[j]>=65 && s[j]<=90)
                cout << s[j] % 64;
        }cout << endl;
    }
    return 0;
}
