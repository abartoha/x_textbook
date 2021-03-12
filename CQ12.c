#include <stdio.h>

int main(){
    double C,F;

    printf("Input F: ");
    scanf("%lf",&F);

    C = ((F-32)*5)/9;

    printf("C = %0.2lf Celsius", C);
    return 0;
}
