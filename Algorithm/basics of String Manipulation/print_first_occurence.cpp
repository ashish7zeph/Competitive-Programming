#include <iostream>
using namespace std;

int main()
{
    int i,j,k,t;
    string s;
    cin >> t;
    for(i=0; i<t; i++)
    {
        cin >> s;
        for(j=0; j<s.size()-1; j++)
        {
            for(k=j+1; k<s.size(); k++)
            {
                if(s[j]==s[k])
                {   s.erase(s.begin()+k);
                    k--;
                }
            }
        }
        cout << s << endl;
    }
    return 0;
}
