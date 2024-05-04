#include<stdio.h>
int main(){

int choice, a, b, s;


printf("\nEnter your choice\n");
printf("\n1.Addition");
printf("\n2.Odd-Even");
printf("\n3.Printing 'n' Natural numbers");
printf("\n\nEnter your choice\n");
scanf("%d",&choice);

switch(choice)
{
    case 1:
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);

    printf("Your sum is : %d\n", a + b);


    case 2:
    printf("Enter a Number:\n");
    scanf("%d",&a);
    if(a%2==0)
    printf("It is an Even number\n");
    else
    printf("It is an Odd number\n");


    case 3:
    
    printf("Enter the amount of natural numbers you want:\n");
    scanf("%d",&a);
    printf("Your Natural Numbers are:\n");
    for(b=1;b<=a;b++)
    printf("%d ",b);
    

}
    return 0;
}