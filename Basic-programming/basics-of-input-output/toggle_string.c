#include <stdio.h>
#include <string.h>

int main()
{
    int i,l;
    char a[100];
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
      if(a[i]>='A'&&a[i]<='Z')
      a[i]=a[i]+32;
      else if(a[i]>='a'&&a[i]<='z')
      a[i]=a[i]-32;
    }
    for(i=0;i<l;i++)
    printf("%c",a[i]);
    return 0;
}
