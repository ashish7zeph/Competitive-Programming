#include <iostream>
using namespace std;

int main()
{
    long t, n, k, i, j;
    cin >> t;
    for(i=0; i<t; i++){
        cin >> n >> k;
        long a[n]= {0};
        k = k % n;
        for(j=0; j<n; j++){
            cin >> a[j];
            if(j >= n-k)
                cout << a[j] << " ";
        }
        for(j=0; j<n-k; j++)
            cout << a[j] << " ";
        cout << endl;
    }
    return 0;
}
