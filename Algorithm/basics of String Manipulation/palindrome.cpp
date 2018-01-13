#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int i,t;
    string s,r;
    cin >> t;
    
    for(i=0; i<t; i++)
    {
        cin >> s;
        r=s;
        reverse(s.begin(),s.end());
        if(s!=r)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
