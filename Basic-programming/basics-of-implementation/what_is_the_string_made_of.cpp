#include <iostream>
using namespace std;

int linescount(int x)
{
    if(x==1)
        return 2;
    else if(x==7)
        return 3;
    else if(x==2 || x==3 || x==5)
        return 5;
    else if(x==4)
        return 4;
    else if(x==8)
        return 7;
    else if(x==0 || x==9 || x==6)
        return 6;
}
int main()
{
    int i,c=0;
    string s;
    cin >> s;
    for(i=0; i<s.size(); i++)
    {
        c+=linescount(s[i] % 48);
    }
    cout << c;
    
    return 0;
}
