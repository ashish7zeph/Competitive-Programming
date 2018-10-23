#include<bits/stdc++.h>
using namespace std;
int main(){
int n,test,sem;
vector<int> vec ;
long long ans=0;
priority_queue<int >que;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    scanf("%d",&sem);
    vec.push_back(sem);
}
sort(vec.begin(),vec.end());
test=vec.at(0);
que.push(test);
for(int i=1;i<n;i++){
    test=vec.at(i);
    test-=i;
    que.push(test);
    if(que.top()>test)
    {
        ans+=que.top()-test;
        que.pop();
        que.push(test);
    }
}
printf("%lld",ans);
return 0;
}
