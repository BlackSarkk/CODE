#include<stdio.h>
int main()
{
int x,i;
printf("enter a number\n");
scanf("%d",&x);
for(i=1;i<=x;i++)
{
    if(i%2==0)
    printf("%d ",i);
}
return 0;
}