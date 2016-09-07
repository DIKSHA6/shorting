#include<stdio.h>
#include<conio.h>
int main()
{
int a[100],n,l,r,sum,s,minl,minr,i,m,minm;
scanf("%d",&n);
printf("enter the array elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
l=0;
r=l+1;
m=n-1;
s=a[l]+a[m]+a[n];
while(l+r<m)
{
        sum=a[l]+a[r]+a[m];
        {
        if(abs(s)>abs(sum))
        {
            s=sum;
            m--;
    }
}
}
printf("%d %d %d",a[l],a[r],a[m]);
return 0;
}
