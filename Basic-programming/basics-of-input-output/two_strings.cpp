#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t,i;
    cin >> t;
    string s1,s2;
    
    for(i=0; i<t; i++){
        cin >> s1 >> s2;
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if(s1 == s2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }    
    return 0;
}
