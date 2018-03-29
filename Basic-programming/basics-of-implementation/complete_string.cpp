#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t,i,j,flag;
    string s;
    cin >> t;
    for(i=0; i<t; i++){
        cin >> s;
        flag = 0;
        sort(s.begin(),s.end());
        for(j=0; j<s.size(); j++){
            if(s[j] % 97 == flag){
                flag++;
            }
            if(flag == 26)
                break;
        }
        if(flag == 26)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
