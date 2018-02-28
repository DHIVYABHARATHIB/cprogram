#include<stdio.h>
void main()
{
int n,count=0;
printf("the number");
scanf("%d",&n);
while(n!=0)
{
count++;
n=n/10;
}
printf("the count is %d",count);
}
