#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int cert(int a[],int n)
{
    int i,j,l,r;
    
for(i=0;i<n;i++)
{
l=0;
for(j=0;j<i;j++)
l=l+a[j];
r=0;
for(j=i+1;j<n-1;j++)
r=r+a[j];
if(l==r)
 return i;
}
 return -1;   
}
int main()
{
int n,i,t;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
int k=cert(a,n);
printf("%d",k);
}
}

