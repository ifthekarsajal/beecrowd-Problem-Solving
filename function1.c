#include<stdio.h>
int MulNumbers(int a,int b); ///function prototype

int MulNumbers(int a, int b){ //function def
    int mul;
    mul=a*b;
    return mul;
}

int main(){

    int x,y,multiplication,i;

    for(i=1;i<=10;i++){
            printf("Enter two numbers::");
    scanf("%d %d",&x,&y);
    multiplication=MulNumbers(x,y);
    printf("Mul is:::%d\n",multiplication);

    }





return 0;
}
