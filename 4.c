#include <stdio.h>

int main(void)
{
    /*Индекс это смещение, т.к первый элемент находиться на нулевом растоянии, то его индекс 0*/
    double m[8];
    m[0] = 1.0, m[1] = 1.0, m[2] = 1.0;
    for (int i = 3; i < 8; i++){
        m[i] = m[i-2] + m[i-3];

    }

    double sum = 0;
    double re[8];

    for (int j = 0; j < 8; j++){
        sum += m[j];
        re[j] = sum;
        printf("%.2f ",m[j]);
    }

    printf("\n");

    for (int j = 0; j < 8; j++){
        printf("%.2f ",re[j]);
    }

    printf("\n");

    return 0;

}
