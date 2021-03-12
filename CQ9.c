#include <stdio.h>
#include <conio.h>

int main(){
    //As the answer of D
    int i = 0, j;
    printf("Enter j : ");
    scanf("%d",&j);
    printf("%d times table\n", j);
    for(;i <= 12; i++){
        printf("%dx%d=%d\n",i,j,i*j);
        //printf("\t%d\tx\t%d\t=\t%d\n",i,j,i*j);
    }
    printf("\n");
    return 0;
}
