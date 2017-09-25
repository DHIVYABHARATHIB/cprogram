#include<stdio.h>
#include<conio.h>
void main()
{
int i,n1,n2,min,hcf=1;
printf("enter the two number");
scanf("%d%d",&n1,&n2);
min=(n1<n2)? n1:n2
for(i=1;i<min;i++)
{
if(n1%i==0&&n2%i==0)
{
hcf=i;
}
}
printf("enter the values of n1,n2,hcf);
}
