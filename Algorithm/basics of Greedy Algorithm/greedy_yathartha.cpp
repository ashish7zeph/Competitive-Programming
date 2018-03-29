#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int i,n,k,x,c=0,y=1,price=0;
    cin >> n >> k;
    vector <int> ci;
    for(i=0; i<n; i++)
    {
        cin >> x;
        ci.push_back(x);
    }
    sort(ci.begin(),ci.end());
    for(i=ci.size()-1; i>=0; i--)
    {
        if(c == k)
        {   c = 0;
            y++;    }
        ci[i]=ci[i]*y;
        c++;
    }
    for(i=0; i<n; i++)
    price += ci[i];
    cout << price <<endl;
    return 0;
}
