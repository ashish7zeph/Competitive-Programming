#include <iostream>
using namespace std;

int main()
{
    int i,t;
    cin>>t;
    string n,m;
    for(i=0; i<t; i++)
    {
        cin>>n>>m;
        
        if(n==m)
        cout<<"YES\n";
        else if((n == "2" && m == "4") || (n == "4" && m == "2"))
        cout << "YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}
