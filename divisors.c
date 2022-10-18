#include<stdio.h>
int main(){
    int number,i=0;
    scanf("%d",&number);
    while(i<=number){
            i++;
        if(number%i==0){
            printf("%d\n",i);
        }
    }
return 0;
}
