#include <stdio.h>

int main(void)
{
    /*Т.к, если мы сделаем целочисленный 0, то дальнейшая сумма будет отбрасываться без дробной части, число будет другим*/
    int N;
    while (scanf("%d",&N)==1 && N > 0){
        double sum = 0.0;
        for (int X = 1;X <= N; ++X){
            sum += 1.0 /((X*X) + 1);

        }
        printf("%.6f\n",sum);
    }
    return 0;
}