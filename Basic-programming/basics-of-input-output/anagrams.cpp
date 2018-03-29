#include <iostream>
using namespace std;

int main()
{
    long i, t, j, c, k;
    string s1, s2; 
    cin >> t;
    for(i=0; i<t; i++){
        cin >> s1 >> s2;
        c = 0;
        if(s1.size() <= s2.size()){
            for(j=0; j<s1.size(); j++){
                for(k=0; k<s2.size(); k++){
                    if(s1[j] == s2[k]){
                        s2[k] = '0';
                        c++;
                        break;
                    }
                }
            }
            cout << (s2.size() - c) + (s1.size() - c) << endl;
        }
        else if(s2.size() < s1.size()){
            for(j=0; j<s2.size(); j++){
                for(k=0; k<s1.size(); k++){
                    if(s2[j] == s1[k]){
                        s1[k] = '0';
                        c++;
                        break;
                    }
                }
            }
            cout << (s1.size() - c) + (s2.size() - c) << endl;
        }
    }
    return 0;
}
