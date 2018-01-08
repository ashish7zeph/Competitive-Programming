#include <iostream>
#include <cmath>
using namespace std;

int main(){

    long long i, t, n, j, x, l, r, y;
    cin >> t;
    for(i=0; i<t; i++){
        cin >> n;
        long long a[n];
        for(j=0; j<n; j++)
            cin >> a[j];
        for(j=0; j<n; j++){
            r = j;
            if(r<n-1 && a[r+1]>a[r]){
                while(r<n-1 && a[r+1]>a[r])
                    r++;
            }
            else if(r<n-1 && a[r+1]<a[r]){
                while(r<n-1 && a[r+1]<a[r])
                    r++;
            }
            l = j;
            if(l>0 && a[l-1]<a[l]){
                while(l>0 && a[l-1]<a[l])
                    l--;
            }
            else if(l>0 && a[l-1]>a[l]){
                while(l>0 && a[l-1]>a[l])
                    l--;
            }
                cout<<l<<" "<<r<<endl;
                cout<<fabs(1-2)<<endl;
            if(fabs(a[j]-a[l]) > fabs(a[j]-a[r]))
                y = fabs(a[j]-a[l]);
            else
                y = fabs(a[j]-a[r]);

                cout<<y<<endl;

            if(j == 0)
                x = y;
            else if(y>=x)
                x = y;

        }
        cout << x << endl;
    }

    return 0;
}
