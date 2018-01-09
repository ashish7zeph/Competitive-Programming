#include <iostream>
using namespace std;

int main()
{
    int i,c=0,j;
    string s;
    cin >> s;
    for(i=0; i<s.size(); i++)
    {
        for(j=i+1; j!=s.size(); j++)
        {
            if(s[i]==s[j])
            {
                s.erase(s.begin()+j);
                c++;
                j--;
            }
        }
    }
    cout << c;
    return 0;
}
