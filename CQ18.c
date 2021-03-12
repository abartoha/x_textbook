#include <stdio.h>

//This program doesn't work, straight from the book

int main(){
    int a,b,c,i;
    scanf("%d %d %d",&a,&b,&c);

    if (a>b)
    {printf("%d is largest", a);
    else
    printf("%d is largest", c);}
    else
    {if (b>c)
    printf("%d is largest",b);
    else
    printf("%d is largest", c);}}
