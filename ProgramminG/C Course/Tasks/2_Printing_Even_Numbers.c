#include<stdio.h>
int main(){

    int x=0,y=0;
    printf("The Even Numbers are:\n");

    while(y<=100){
    
    if(x%2==0)
    
        printf("%d ",x);
        x++;
    

        y++;
    }


    // int x,i;
    // printf("Enter a Number\n");
    // scanf("%d",&x);
    // for(i=1;i<=x;i++)
    // {
    // if(i%2==0)
    // printf("%d ",i);
    // }

    return 0;
}