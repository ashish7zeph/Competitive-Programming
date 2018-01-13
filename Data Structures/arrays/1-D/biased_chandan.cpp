#include <iostream>
using namespace std;

int main()
{
    int n, i, j = 0, x, r = 0;
    cin >> n;
    int ar[n] = {0};
    for(i=0; i<n; i++){
        cin >> x;
        if(x == 0 && j>0)
            j--;
        else{
            ar[j] = x;
            j++;
        }
    }
    for(i=0; i<j; i++)
        r += ar[i];
        
    cout << r << endl;
    return 0;
}
