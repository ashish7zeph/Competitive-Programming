#include <iostream>
using namespace std;

int main()
{
    long long i, j, x, n, y, c;
        cin >> n >> x;
        long long a[n] = {0};
        c = 0;
        y = 0;
        for(j=0; j<n; j++){
            cin >> a[j];
            if(a[j] > x){
                c++;
                y--;
            }
            if(c == 2){
                y++;
                break;
            }
            y++;
        }
        cout << y << endl;
    return 0;
}
