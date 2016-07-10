# kowshikah
#include<stdio.h>
#include<conio.h>
void main()
{
int a,n,i=1,j,c=0;
clrscr();
scanf("%d",&a);
n=2*a;
while(i<n)
{
for(j=i+1;j<=n;j++)
{
printf("%d%d\n",i,j);
c++;
}
i++;
}
printf("no pair %d",c);
getch();
}
