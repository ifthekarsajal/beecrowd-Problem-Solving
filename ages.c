#include<stdio.h>
int main(){
    int number,i=0;
    float avg,sum=0;
    while(1){
        scanf("%d",&number);

          if(number>0){
                i=i+number;
                 sum++;

          }
          else if(number<0)break;
          }
           avg=i/sum;
            printf("%.2f\n",avg);
return 0;
}
