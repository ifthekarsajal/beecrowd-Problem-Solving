#include<stdio.h>
int main(){
{
     int product_code,product_item;
     double total_price;
     scanf("%d %d",&product_code,&product_item);
     if(product_code==1){
         total_price= (double)(4.00*product_item);
     }
     else if(product_code==2){
         total_price= (double)(4.50*product_item);
     }
     else if(product_code==3){
         total_price= (double)(5.00*product_item);
     }
     else if(product_code==4){
         total_price= (double)(2.00*product_item);
     }
     else if(product_code==5){
         total_price= (double)(1.50*product_item);
     }
     printf("Total: R$ %.2lf",total_price);
}
return 0;
}

