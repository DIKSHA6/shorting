#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,k,a[100],l,m,n,o;
scanf("%d",&n);
printf("enter the array elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
scanf("%d",&k);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if((a[i]^2)+(a[j]^2)==(a[k]^2))
{
l=i;
m=j;
o=k;
}
}
}
printf("%d %d %d",l,m,o);
return 0;
}
