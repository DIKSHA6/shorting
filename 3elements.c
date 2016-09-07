#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,k,l,a[100],n;
scanf("%d",&n);
printf("enter the array elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
scanf("%d",&k);
i=0;
j=i+1;
l=n-1;
while(i+j<=l)
{
if(a[i]+a[j]+a[l]==k)
{
printf("%d %d %d",a[i],a[j],a[l]);
break;
}
else if(a[i]+a[j]+a[l]<k)
{
j++;
}
else if(a[i]+a[j]+a[l]>k)
{
l--;
}
}
return 0;
}
