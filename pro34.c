#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,d;
printf("enter the no of nijans and opponent");
scanf("%d %d",&n1,&n2);
if(n2>n1)
{
d=n2-n1;
printf("the fight is possilbe %d",d);
}
else
{
printf("the fight is not possbile");
}
}
