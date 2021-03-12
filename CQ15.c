#include <stdio.h>

int main(){
    int i = 1,s,n;
    printf("Enter Last Term: ");
    scanf("%d", &n);
    s = 0;
    while(i <= n){
        s = s+i;
        i = i+3;
    }
    printf("Summation = %d", s);
    return 0;
}
