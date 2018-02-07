#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int i;
printf("enter the string");
scanf("%s",a);
for(i=0;a[i]<='\0';i++)
{
if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u')||(a[i]=='A')||(a[i]=='E')||(a[i]=='I')||(a[i]=='O')||(a[i]=='U'))
{
printf("yes");
}
else
{
printf("no");
}
}}
