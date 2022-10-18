#include<stdio.h>

int main()
{

     float n;
     int sum=0,i=1;
     while(i<=6){
     i++;
     scanf("%f",&n);
     if(n>0){
        sum=sum+1;
     }
   }

     printf("%d valores positivos",sum);
     return 0;
}
