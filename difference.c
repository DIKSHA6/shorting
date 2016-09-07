#include<stdio.h>
#include<conio.h>
int main()
{
int n,a[100],i,j,s,sum;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
i=0;
j=n-1;
s=a[0]-a[1];
while(a[i]<a[j])
{
sum=a[i]-a[j];
if(abs(s)>abs(sum))
{
s=sum;
j--;
break;
}
else
{
    i++;

}
}
printf("%d %d",a[i],a[j]);
return 0;
}
