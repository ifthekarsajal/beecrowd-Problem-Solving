#include<stdio.h>
int addNumbers(int a,int b);//function prototype

int addNumbers(int a,int b)  //function def
{
    int sum;
    sum=a+b;
    return sum;   //function statement


}

int main(){
   int num1,num2,add;
   printf("Enter Two numbers:");
   scanf("%d %d",&num1,&num2);
   add=addNumbers(num1,num2);
   printf("sum= %d",add);

return 0;
}
