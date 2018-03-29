#include <iostream>
using namespace std;

int main(){
    
    long n, t, i, j, c;
    string s;
    cin >> t;
    for(i=0; i<t; i++){
        cin >> n >> s;
        c = 0;
        for(j=0 ; j<s.size(); j++){
            if(s[j] == '0')
                c++;
        }
        cout << c << endl;
    }
    
    return 0;
}
