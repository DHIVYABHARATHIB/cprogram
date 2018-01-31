#include<stdio.h>
#include<conio.h>
void main()
{
int base,exponent;
int h;
printf("enter the base");
scanf("%d",&base);
printf("enter the exponenet");
scanf("%d",&exponent");
h=base^(exponent+1);
printf("the result is %d",h);
}
