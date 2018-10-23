#include <bits/stdc++.h>

using namespace std;

void printPairs(int arr[], int arr_size, int sum)
{
    int c=0;
    unordered_set<int> s;
    for (int i = 0; i < arr_size; i++)
    {
        int temp = sum -arr[i];

        if (temp >= 0 && s.find(temp) != s.end() &&arr[i]<=temp){
            cout<< arr[i]-1000000 << " " << temp-1000000 << endl;
                c=1;
                break;}
        if (temp >= 0 && s.find(temp) != s.end() &&arr[i]>temp){
            cout<< temp-1000000 << " " <<arr[i]-1000000  << endl;
                c=1;
                break;}
        s.insert(arr[i]);
    }
    if(c==0)
        cout<<"!OK"<<endl;
}


int main()
{
    int jk;
    cin>>jk;
    while(jk--)
    {
        int n,k;
        cin>>k>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
            A[i]+=1000000;}
    k+=2000000;
    int arr_size = sizeof(A)/sizeof(A[0]);
    if(arr_size==0||arr_size==1)
    {
        cout<<"!OK"<<endl;
    }
    else{
    printPairs(A, arr_size, k);
    }
    }
    return 0;
}