#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long i, j, t, n, k, c;
    cin >> t;
    for(i=0; i<t; i++){
        cin >> n >> k;
        long long a[n]={0};
        for(j=0; j<n; j++)
            cin >> a[j];
        sort(a, a+n);
        if(k - a[0] >= 0)
            cout << (k - a[0]) << endl;
        else cout << 0 << endl;
    }
    return 0;
}
