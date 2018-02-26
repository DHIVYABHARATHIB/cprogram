#include<stdio.h>
void main()
{
int m,m1,rev=0;
printf("the number ");
scanf("%d",&m);
while(m!=0)
{
m1=m%10;
rev=(rev*10)+m1;
m=m/10;
}
printf("the revesed number is %d",rev);
}
