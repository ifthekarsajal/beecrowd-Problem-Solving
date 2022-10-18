#include<stdio.h>

int main()
{
    int number,i;
    float a,b,c,result,avg;
    scanf("%d",&number);
    for(i=0;i<number;i++){
        scanf("%f %f %f",&a,&b,&c);
        result=a*2+b*3+c*5;
        avg=result/(2+3+5);
        printf("%.1f\n",avg);
  }

return 0;

}
