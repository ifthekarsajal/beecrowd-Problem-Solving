#include<stdio.h>
double DivNumbers(double a,double b); ///function prototype

double DivNumbers(double a,double b){
    double d;
    d=a/b;
    return d;
}
int main(){
    double x,y,z;
    printf("Enter your two number");
    scanf("%lf %lf",&x,&y);
    z=DivNumbers(x,y);
    printf("Divison is:::%.2lf\n",z);
return 0;
}
