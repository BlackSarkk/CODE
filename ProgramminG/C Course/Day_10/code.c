#include<stdio.h>
int main(){

add();
isEven();

    return 0;
}


add(){
	int a,b,c;
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("Sum is %d\n",c);
}

isEven(){
	int a;
	printf("Enter a Number\n");
	scanf("%d",&a);
	
	if(a%2==0)
	{
	printf("Number is Even");
}
	else
	{
	
	printf("Number is Odd");
	
}
}
