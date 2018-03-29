#include <iostream>
#include <set>
#include <vector>
#define lli long long
using namespace std;

int main()
{
    lli i,j,n,q,x,y,flag = 0;
    vector <lli> v;
    vector <lli> vec;
    set <lli> s;
    cin >> n >> q;
    for(i=0; i<n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    for(i=0; i<n; i++)
    {
        for(j=i; j<n; j++)
        {
            s.insert(v.at(j));
        }
        if(i==0 && s.size() == v.size()){
            flag = 1;
            break;
        }
        vec.push_back(s.size());
        s.clear();
    }
    for(j=0; j<q; j++)
    {
        cin >> y;
        if(flag == 1)
            cout << v.size()-(y-1) << endl;
        else
            cout << vec.at(y-1) << endl;
    }
    return 0;
}
