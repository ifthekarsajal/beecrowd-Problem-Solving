#include<stdio.h>
int main(){
    int number=0,a=0,g=0,d=0;
    while(number!=4){
       scanf("%d",&number);

       if(number==1){
                a++;
       }
     else if(number==2){

         g++;
     }
      else if(number==3){
            d++;
      }
    }
 printf("MUITO OBRIGADO\n");
     printf("Alcool: %d\n",a);
      printf("Gasolina: %d\n",g);
       printf("Diesel: %d\n",d);

return 0;
}


