#include <stdio.h>

int main()
{
    long long int i,n,a[1000],p=1;
    scanf("%lld",&n);
    
    for(i=0; i<n; i++)
        scanf("%ld",&a[i]);
        
    for(i=0; i<n; i++)
        p = (p*a[i]) % 1000000007;
        
    printf("%lld",p);
    return 0;
}
