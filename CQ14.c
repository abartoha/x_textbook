#include <stdio.h>
#include <math.h>

#define PI 3.1416

int main(){
    double r,A;
    printf("Enter radius: ");
    scanf("%lf", &r);
    A = PI*pow(r,2);
    printf("%0.2lf",A);
    return 0;
}
