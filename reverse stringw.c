#include<stdio.h>
#include<string.h>
int main()
{char a[10],b[80];
char temp;
int n,i;
gets(a);
n=strlen(a);
for(i=0;a[i]<=n/2-1;i++)
{temp=a[i];
a[i]=a[n-i];
a[n-i]=temp;

}
printf("%s",a);
return 0;
}
