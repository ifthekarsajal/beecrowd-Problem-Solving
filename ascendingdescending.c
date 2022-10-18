#include<stdio.h>
int main(){
   int firstNum,secondNum,i;
   for(i=0;i<=100;i++){
    scanf("%d %d",&firstNum,&secondNum);
    if(firstNum==secondNum){
        break;
    }
    else if(firstNum<secondNum){
        printf("Crescente\n");
    }
      else if(firstNum>secondNum){
        printf("Decrescente\n");
    }
   }
return 0;
}
