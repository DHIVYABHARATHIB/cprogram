#include<stdio.h>
#include<conio.h>
void main()
{
int i=65;
int n=120;
printf("enter the value before swapping");
i=i^n;
n=i^n;
i=i^n;
printf("enter the value after swapping");
}
