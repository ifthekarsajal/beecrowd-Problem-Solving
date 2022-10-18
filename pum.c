#include<stdio.h>
int main(){

    int num_of_rows,i,j=1,k=2,l=3;
    scanf("%d",&num_of_rows);
    for(i=0;i<num_of_rows;i++){
        printf("%d %d %d PUM\n",j,k,l);
        j=j+4;
        k=k+4;
        l=l+4;
    }

return 0;
}



