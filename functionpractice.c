#include<stdio.h>
int SumNumbers(int x , int y);

int main(){

    int a,b,c;
    printf("Enter first number::");
    scanf("%d",&a);
    printf("Enter second number::");
    scanf("%d",&b);
    c=SumNumbers(a,b);
    printf("%d",c);

return 0;
}

int SumNumbers(int x ,int y){
       int sum;
       sum=x+y;
       return sum;


}
