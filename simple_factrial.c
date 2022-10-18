#include<stdio.h>
int main(){

    int number,factorial=1,i;
    scanf("%d",&number);
    for(i=1;i<=number;i++){
    factorial=factorial*i;
    }
    printf("%d\n",factorial);
return 0;
}
