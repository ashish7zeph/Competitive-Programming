#include <iostream>
using namespace std;

int main(){
    
    long long n, x;
    
    while(cin >> n){
        x = n & (n-1);
        cout << (n ^ x) << endl;
    }
    
    return 0;
}
