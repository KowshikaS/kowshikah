# kowshikah
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i=1,j,c=0;
scanf("%d",&a);
b=2*a;
while(i<b)
{
for(j=i+1;j<=b;j++)
{
printf("%d%d\n",i,j);
c++;
}
i++;
}
printf("no pair %d",c);
getch();
}
