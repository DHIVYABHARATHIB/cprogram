#include<stdio.h>
#include<string.h>
void main()
{
char n[10],a[5],b[5];
int i,j,k,l;
printf("enter the string");
scanf("%s",&n);
k=strlen(n);
l=0;
for(i=0,j=1;i<k ,j<k;i++ ,j++)
{
    a[i]=n[i];
    b[j]=n[j];
    l++;
}
printf("the even and odd strings are%s%s",a,b);
}
