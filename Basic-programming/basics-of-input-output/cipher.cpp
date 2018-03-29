#include <iostream>
using namespace std;

int main()
{
    int i, n, x;
    string s;
    cin >> s >> n;
    x = n%10;
    n %= 26;
    for(i=0; i<s.size(); i++){
        if(s[i]>=65 && s[i]<=90){
            if((s[i]+n) > 90)
                s[i] -= 26;
            s[i] += n;
        }
        else if(s[i]>=97 && s[i]<=122){
            if((s[i]+n) > 122)
                s[i] -= 26;
            s[i] += n;
        }
        else if(s[i]>=48 && s[i]<=57){
            if((s[i]+x) > 57)
                s[i] -= 10;
            s[i] += x;
        }
    }
    cout << s;
    return 0;
}
