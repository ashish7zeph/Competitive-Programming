#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n+1]={0};
    int p=-1;
    long long s = 0;
    for (int i = 0; i < n+1; ++i)
    {
        cout<<"Q ";
        for(int j=0;j<n;j++)
          cout<<array[j]<<" ";
        int value;
        cin >> value;
         s =s+ value;
        if(i==0)
        p=s;
        else if(p>value)
        {
        array[i-1]=1-array[i-1];
        value=p;
        }
        p=value;
         array[i]=1-array[i];
         //if(value==n)
         //break;
         cout.flush();
    }
    cout<<"A ";
    for(int i=0;i<n;i++)
    cout<<array[i]<<" ";
}

