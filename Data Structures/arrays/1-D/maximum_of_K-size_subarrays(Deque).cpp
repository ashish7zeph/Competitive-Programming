#include <iostream>
using namespace std;

int main()
{
    long n, k, i, j, l, temp;
    cin >> n >> k;
    long a[n];
    for(i=0; i<n; i++)
        cin >> a[i];
    for(i=0; i<(n -(k -1)); i++){
        j = i;
        l = 1;
        temp = a[i];
        while(l < k){
            if(a[j+1] > temp)
                temp = a[j+1];
            j++;
            l++;
        }
        cout << temp << " ";
    }
    return 0;
}
