#include <iostream>
using namespace std;

int main()
{
    int i;
    string s;
    cin >> s;
    for(i=0; i<s.size(); i++)
    {
        if(s[i] == '?')
        {
            if(s[i-1] == 'a' || s[i+1] == 'a')
                s[i] = 'b';
            else
                s[i] = 'a';
        }
            
    }
    cout << s;
    return 0;
}
