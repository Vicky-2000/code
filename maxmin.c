#include<stdio.h>
int main()
{int a[1000],n,i,j,temp;
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{printf("unsorted array=%d",a[i]);
}printf("\n");
for(i=0;i<n;i++)
{for(j=i+1;j<n;j++)
{if(a[i]<a[j])
{temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
int max=a[n];
int min=a[1];
printf("%d ",min);
    printf("%d ",max);
return 0;
}
