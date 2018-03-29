#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long t, i, j, n, c;
    cin >> t;
    for(i=0; i<t; i++){
        cin >> n;
        long long a[n];
        for(j=0; j<n; j++)
            cin >> a[j];
        sort(a, a+n);
        j = 0;
        c = 1;
        while(a[j+1] == a[j]){
            c++;
            j++;
        }
        if(c % 2 == 0)
            cout << "Unlucky" << endl;
        else
            cout << "Lucky" << endl;
    }
    return 0;
}
