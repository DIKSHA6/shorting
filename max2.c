#include<stdio.h>
#include<conio.h>
int main()
{
int n,i=0,a[100],m=0,rem=0,l=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
a[a[i]%n]=a[a[i]%n]+n;
}
m=a[0];
for(i=0;i<n;i++)
{
    if(a[i]>m)
{
     m=a[i];
     l=i;
}
}
    printf("%d",l);

return 0;
}
