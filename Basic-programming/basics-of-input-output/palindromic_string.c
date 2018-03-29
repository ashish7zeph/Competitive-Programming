#include <stdio.h>
#include <string.h>

int main()
{
    int i=0,j;
    char a[100];
    scanf("%s",a);
    j=strlen(a)-1;
    while(i<j&&a[i]==a[j])
    {
        i++;
        j--;
    }
    if(i>=j)
    printf("YES");
    else
    printf("NO");
    return 0;
}
