// #include<conio.h>
#include<stdio.h>

void main(){
    void add(void);
    // clrscr();
    add();
    // getch();
}

void add(){
    int a, b, c;

    printf("Enter two Numbers:\n");
    scanf("%d%d",&a,&b);
    c = a + b;

    printf("Sum is %d\n",c);
}