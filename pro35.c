#include<stdio.h>
//#include<conio.h>
void main()
{
int n,m,i,j;
printf("enter the numbers");
scanf("%d %d",&n,&m);
for(i=2;i<=n;i++)
{
if(n%i==0)
{
printf("%d",i);
}}
for(j=2;j<=m;j++)
{
if(m%j==0)
{
printf("%d",j);
}
}
if(i==j)
{
    printf("%d",i);
}
}
