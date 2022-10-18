#include<stdio.h>
int main(){

  int x,y,z=0,i,t;
  scanf("%d %d",&x,&y);
   if(x>y){
    t=x;
    x=y;
    y=t;
   }
    for(i=x;i<=y;i++){
            if(i%13!=0){
                z+=i;
            }
    }
     printf("%d\n",z);
return 0;
}
