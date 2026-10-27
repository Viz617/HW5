#include <stdio.h>

double calc(double a, double b);
int main(void)
{
    /*Тип double используем для точности, return берет значение из выполняемой функции и возвращает туда, где ее вызвали,
    завершает работу функции в которой объявлена*/
    double a;
    double b;
    while (scanf("%lf %lf",&a,&b) == 2){
        printf("%.4lf\n",calc(a,b));
    }
    return 0;
}
double calc(double a, double b)
{
    return (a-b)/(a*b);
}