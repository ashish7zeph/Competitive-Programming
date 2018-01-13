#include <iostream>
using namespace std;

int main(){
    
    int i, j, t, count;
        cin >> t;
        
        for(i=0; i<t; i++){
            
            string str;
            cin >> str;
            count = 0;
            for(j=0; j<str.size(); j++){
                if(str[j]=='A'||str[j]=='E'||str[j]=='I'||str[j]=='O'||str[j]=='U'||str[j]=='a'||str[j]=='e'||str[j]=='i'||str[j]=='o'||str[j]=='u')
                    count++;
            }
            cout << count << endl;
        }
    
    return 0;
}
