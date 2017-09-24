#include<stdio.h>
#include<conio.h>
void main()
{
int f1=0,f2=1,f3,l,c=0;
printf("enter the limit");
scanf("%d",&n);
printf("the fibanocci series is");
scanf("%d",&f1);
scanf("%d",&f2);
c=2;
while(c<l)
{
f3=f1+f2;
c++;
printf("%d",f3);
f1=f2;
f2=f3;
}
}
