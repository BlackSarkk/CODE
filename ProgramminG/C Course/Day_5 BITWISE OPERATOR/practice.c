#include<stdio.h>
int main(){
    
int a=45,b=56,c;

printf("\nSome Bitwise Operators are:\n\n");

printf("Using [Bitwise AND '&' Operator],          The value c is: %d\n", c=a&b);

printf("Using [Bitwise OR '|' Operator],           The value c is: %d\n", c=a|b);

printf("Using [Bitwise XOR '^' Operator],          The value c is: %d\n", c=a^b);

printf("Using [Bitwise Right Shift '>>' Operator], The value c is: %d\n", c=a>>2);

printf("Using [Bitwise Left Shift '<<' Operator],  The value c is: %d\n", c=b<<3);

    return 0;
}