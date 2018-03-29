#include <stdio.h>

int main()
{
    int i,l,n,w,h;
    scanf("%d%d",&l,&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&w,&h);
        if(w>=l&&h>=l)
        {
          if(w==h)
        printf("ACCEPTED\n"); 
        else
        printf("CROP IT\n");
        }
        else if(w<l||h<l)
        printf("UPLOAD ANOTHER\n");
    }
    return 0;
}
