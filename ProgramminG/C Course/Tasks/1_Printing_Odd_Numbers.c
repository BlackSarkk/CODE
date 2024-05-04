#include<stdio.h>
int main(){

    int x=0,y=0;
    printf("The Odd Numbers are:\n");

    while(y<=100){
    
    if(x%2!=0)
    
        printf("%d ",x);
        x++;
    
    y++;
    }

    return 0;
}