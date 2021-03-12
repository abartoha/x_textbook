#include <stdio.h>
#include <conio.h>

int main(){
    //Ans C
        int s = 0, i = 2, n; //i = 1 before
        printf("Enter the value of total number : ");

        scanf("%d",&n);
        while (i <= n){
            s = s + i;
            i = i+2; //i++ before
        }
        printf("The sum of the value of total number is %d\n", s);
        getch();
        return 0;
}
