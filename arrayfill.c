#include<stdio.h>
int main(){

         int n[10],i,j,result;
         scanf("%d",&result);
         j=result;
         for(i=0;i<10;i++){
                n[i]=j;
            printf("N[%d] = %d\n",i,n[i]);
            j*=2;
         }
return 0;
}
