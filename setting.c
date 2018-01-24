#include<stdiio.h>
#include<conio.h>
void main()
{
int m,n;
printf("enter the number");
scanf("%d",&n,&m);
m=m^n;
n=m^n;
m=m^n;
}
