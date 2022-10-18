#include<stdio.h>
int main(){
    float number,i=0,j=0;

    while(1){

        scanf("%f",&number);

        if(number>=0 && number<=10){
           i=number;
           j=1;
                printf("media=%.2f\n",(i+j)/2);
                break;
}
        else if(number<10 || number<0){
printf("nota invalida");
        }

    }




return 0;
}
