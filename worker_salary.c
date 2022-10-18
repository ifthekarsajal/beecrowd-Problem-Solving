#include<stdio.h>
int main(){

    double Total_Salary, Basic_Salary,OT_Rate,Total_OT,OT_Hour,Net_Salary;

    printf("Enter Your Gross Salary:\n");
    scanf("%lf",& Total_Salary);
    if(Total_Salary>=9845){
        printf("your are a senior operator,your grade is::3\n");
        printf("Hi! Your Gross Salary is::%lf\n",Total_Salary);


    Basic_Salary=(Total_Salary-1850)/(float)(1.5);
    printf("Your Basic Salary is::%lf\n",Basic_Salary);

    OT_Rate=(Basic_Salary/208)*2;
    printf("Your OT rate is::%lf\n",OT_Rate);
    printf("Enter Your OT Hour::");
    scanf("%lf",&OT_Hour);
    Total_OT=OT_Rate*OT_Hour;
    printf("your Total OT Amount is::%lf\n",Total_OT);
    Net_Salary=Total_OT+Total_Salary;
    printf("Your Net Salary:%lf",Net_Salary);

    }
      else if(Total_Salary>=9347){
         printf("your are a operator,your grade is::4\n");
         printf("Hi! Your Gross Salary is::%lf\n",Total_Salary);


    Basic_Salary=(Total_Salary-1850)/(float)(1.5);
    printf("Your Basic Salary is::%lf\n",Basic_Salary);

    OT_Rate=(Basic_Salary/208)*2;
    printf("Your OT rate is::%lf\n",OT_Rate);
    printf("Enter Your OT Hour::");
    scanf("%lf",&OT_Hour);
    Total_OT=OT_Rate*OT_Hour;
     printf("your Total OT Amount is::%lf\n",Total_OT);
    Net_Salary=Total_OT+Total_Salary;
    printf("Your Net Salary:%lf",Net_Salary);

    }
    else if(Total_Salary>=8875){
         printf("your are a Jr operator,your grade is::5\n");
         printf("Hi! Your Gross Salary is::%lf\n",Total_Salary);


    Basic_Salary=(Total_Salary-1850)/(float)(1.5);
    printf("Your Basic Salary is::%lf\n",Basic_Salary);

    OT_Rate=(Basic_Salary/208)*2;
    printf("Your OT rate is::%lf\n",OT_Rate);
    printf("Enter Your OT Hour::");
    scanf("%lf",&OT_Hour);
    Total_OT=OT_Rate*OT_Hour;
    printf("your Total OT Amount is::%lf\n",Total_OT);
    Net_Salary=Total_OT+Total_Salary;
    printf("Your Net Salary:%lf",Net_Salary);

    }
    else if(Total_Salary>=8420){
         printf("your are a General operator,your grade is::6\n");
          printf("Hi! Your Gross Salary is::%lf\n",Total_Salary);
         Basic_Salary=(Total_Salary-1850)/(float)(1.5);
    printf("Your Basic Salary is::%lf\n",Basic_Salary);

    OT_Rate=(Basic_Salary/208)*2;
    printf("Your OT rate is::%lf\n",OT_Rate);
    printf("Enter Your OT Hour::");
    scanf("%lf",&OT_Hour);
    Total_OT=OT_Rate*OT_Hour;
    printf("your Total OT Amount is::%lf\n",Total_OT);
    Net_Salary=Total_OT+Total_Salary;
    printf("Your Net Salary:%lf",Net_Salary);

    }
     else if (Total_Salary>=8000) {
         printf("your are a Asst Operator,your grade is::7\n");
         printf("Hi! Your Gross Salary is::%lf\n",Total_Salary);


    Basic_Salary=(Total_Salary-1850)/(float)(1.5);
    printf("Your Basic Salary is::%lf\n",Basic_Salary);

    OT_Rate=(Basic_Salary/208)*2;
    printf("Your OT rate is::%lf\n",OT_Rate);
    printf("Enter Your OT Hour::");
    scanf("%lf",&OT_Hour);
    Total_OT=OT_Rate*OT_Hour;
     printf("your Total OT Amount is::%lf\n",Total_OT);
    Net_Salary=Total_OT+Total_Salary;
    printf("Your Net Salary:%lf",Net_Salary);

    }
    else{
        printf("your salary is wrong ! please communicate your authenticate person for your salary record");

    }




return 0;
}
