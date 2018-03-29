#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    long long t,i,j,n,x,y,z;
    vector <long long> v;
    cin >> t;
    for(i=0; i<t; i++)
    {
        cin >> n;
        x = 0;
        for(j=0; j<n; j++)
        {    
            cin >> x;
            v.push_back(x);
        }
        if(v.size() == 1)
        {
            z = 0;
            goto k;
        }
        sort(v.rbegin(),v.rend());
        y = v[0] + v[1];
        z = y;
        for(j=2; j<n; j++)
        {
            y += v[j];
            z += y;
        }
        k:
        cout << z << endl;
        v.clear();
    }
    return 0;
}
