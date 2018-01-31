#include<stdio.h>
#include<conio.h>
void main()
{
int i,sapces;
char h[100];
printf("enter the string);
scanf("%s",&h);
for(i=0;h[0]!=0;i++)
{
if(h[i]=" ")
{
sapces++;
printf("the spaces are %d",sapces);
}
}
}
