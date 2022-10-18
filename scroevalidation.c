#include<stdio.h>
int main(){
          int i,j=0;
          float score,average,arr[2];
          for(i=0;i<100;i++){
            scanf("%f",&score);

            if(score>=0 && score<=10 ){
                    arr[j]=score;
                    j++;
            }
             else {
               printf("nota invalida\n");
            }
            if(j>1)break;
          }
            average=(arr[0] + arr[1])/2;
           printf("media = %.2f\n",average);

return 0;
}




