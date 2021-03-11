#include <stdio.h>
int main()
{
    int n,i,sum=0;
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
         int a[i];
         scanf("%d",&a[i]);
         if(a[i]<=1000)
         {
              sum=sum+a[i];
         }


     }
     printf("%d",sum);
}
