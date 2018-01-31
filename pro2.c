#include<stdio.h>
#include<conio.h>
void main()
{
int count=0;
char k[50];
printf("enter the character'');
scanf("%s",&k);
if((k>=0)&&(k<=9))
{
count++;
printf("the count is %d",count);
}
}
