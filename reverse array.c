#include<stdio.h>
int main()
{int a[1000],i,n,temp;
scanf("%d",&n);
 printf("enter the range");
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
for(i=0;i<n/2;i++)
{
temp=a[i];
a[i]=a[n-1-i];
a[n-1-i]=temp;
}printf("reverse array is");
for(i=0;i<n;i++)
{printf("%d ",a[i]);
}
return 0;
}
