#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long i, q, l, r, n, x, y, sum;
    vector <long long> v;
    cin >> n >> q;
    for(i=0; i<n; i++){
        cin >> x;
        if(i >= 1)
            y = v.at(i-1) + x;
        else if(i == 0)
            y = x;
        v.push_back(y);
    }
    for(i=0; i<q; i++){
        cin >> l >> r;
        if(l == 1)
            sum = v.at(r-1);
        else
            sum = v.at(r-1) - v.at(l-2);
        
        cout << sum/(r-l+1) << endl;
    }
    return 0;
}
