#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,j,t,k;
printf("enter the array");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
for(j=i+1;j<10;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}}
}
k=a[(10-1)/2];
printf("%d",k);
}
