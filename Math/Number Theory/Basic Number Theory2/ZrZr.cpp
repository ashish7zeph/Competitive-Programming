#include <iostream>
using namespace std;

int main(){
    
    long long t, i, n, c;
        cin >> t;
        for(i=0; i<t; i++){
            cin >> n;
            c = 0;
            while(n != 0){
                n /= 5;
                c += n;
                }
            cout << c << endl;
        }
    return 0;
}
