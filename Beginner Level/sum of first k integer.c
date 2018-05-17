#include<stdio.h>
int main()
{
int n=5,k=5,sum=0;
scanf("%d",n);
int a[20];
for(int i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(int j=1;j<=k;j++)
{
	sum=sum+j;
}
printf("%d",sum);
}
