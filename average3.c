#include<stdio.h>
int main()
{
    double i,j,k,m,avg,last;

    scanf("%lf %lf %lf %lf",&i,&j,&k,&m);

    avg=(i *2 + j * 3 + k * 4 + m) / 10;

    printf("Media: %.1f\n", avg);

    if(avg >= 7.0)
    {

        printf("Aluno aprovado.\n");
    }

    else if(avg >= 5.0)

        {

        printf("Aluno em exame\n");

        scanf("%lf", &last);

        printf("Nota do exame: %.1f\n", last);

        if(last + avg / 2.0 > 5.0){

             printf("Aluno aprovado.\n");
        }

        else{
                printf("Aluno reprovado.\n");
        }

        printf("Media final: %.lf\n", (last + avg) / 2.0);

        }

      else
        {

        printf("Aluno reprovado.\n");

        }

       return 0;
 }
