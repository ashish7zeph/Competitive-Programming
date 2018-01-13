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
            {   cout << "YES ";
                if(s.size()%2==0)
                    cout << "EVEN" << endl;
                else
                    cout << "ODD" << endl;
            }
    }
    return 0;
}
