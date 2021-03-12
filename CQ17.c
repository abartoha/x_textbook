#include <stdio.h>

int main(){
    int k, n, sum = 0; //sum is also the 'first term'
    printf("Input the last term of the series : ");
    scanf("%d", &n);
    k = 3;
    do{
        sum = sum+k;
        k = k+3;
    }while(k <= n);
    printf("The acquired sum is: %d", sum);
    return 0;
}
