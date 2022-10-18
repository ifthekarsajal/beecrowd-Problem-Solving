#include<stdio.h>
int main(){
    int i=1,j,n;
    scanf("%d",&j);
    while(i<=j){
            i++;
        scanf("%d",&n);
        if(n%2==0){
            printf("0\n");
        }
        else{
            printf("1\n");
        }

    }
return 0;
}
