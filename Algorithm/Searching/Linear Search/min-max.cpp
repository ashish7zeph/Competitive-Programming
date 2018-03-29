#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    long long n, i, j, sum = 0;
    cin >> n;
    long long a[n];
    for(i=0; i<n; i++){
        cin >> a[i];
        sum += a[i];
    }
    
    sort(a, a+n);
    
    cout << sum - a[n-1] << " " << sum - a[0];
}
