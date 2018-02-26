#include<stdio.h>
#include<math.h>
void main()
{
int n,m,k,d;
printf("enter the values");
scanf("%d %d %d",&n,&m,&k);
d=(n*m)%k;
printf("the value is %d",d);
}
