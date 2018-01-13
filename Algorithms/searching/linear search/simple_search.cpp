#include <iostream>
using namespace std;

int main(){
    long long n, i, k;
    cin >> n;
    long long a[n];
    for(i=0; i<n; i++)
        cin >> a[i];
        
    cin >> k; 
    
    for(i=0; i<n; i++){
        if(a[i] == k)
        cout << i << endl;
    }
    return 0;
}
