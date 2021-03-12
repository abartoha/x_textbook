#include <stdio.h>


int main(){
    int year;
    //printf("\nEnter the year: ");
    //scanf("%d", &year);
    //Let's assume you entered 2000
    if ((year%4 == 0 && year%100 != 0) || year%400 == 0){
        printf("\n%d is a leap year",year);
        return 0;
    }
    printf("\n%d is not a leap year",year);
    //Will print 2000
    return -1;
}
