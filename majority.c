#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,a[100],k=0,c[100];
scanf("%d",&n);
printf("enter the array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{

    c[i]=0;
}
k=n/2;
for(i=0;i<n;i++)
{
c[a[i]]++;
}
for(i=0;i<n;i++)
{
if(c[i]>k)
{
printf("%d",i);
break;
}
}
return 0;
}
