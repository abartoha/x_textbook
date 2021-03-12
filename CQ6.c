/*
Information and Communications Technology by Professor Mujibur Rahman
Chapter 5 - C Programming, Creative Sample Questions, Page 375 (July 2016 Edition)
                                CQ 6
Difficulty:
    Mid echelon Basic
Topics Covered:
    Declarations, User Input, Console Printing, Computer Arithmetics, Console Functions
Reference:
    Find the GCD of M & N where M > N > 0, of course, M and N are keyboard inputs
    (Ex. 51%15 = 6 -> 15%6 = 3 -> 6%3 = 0 So GCD is 3)

    //A,B and C are not relevant

    //D) From the function in the given stem, write a C program that checks
    if the numbers taken through keyboard input are even or odd numbers


Solution:
    1. Targets:
        . Take two keyboard inputs
        . Decrement i from N until it's divisible with both M and N
        . print i
    2. Respective functions:
        .scanf
        .for loop and arithmetic
        .printf

*/

#include <stdio.h> //printf, scanf
#include <conio.h> //getch

int main(){
    int M,N,i = 1;
    printf("Enter M: ");
    scanf("%d",&M);
    printf("Enter M: ");
    scanf("%d",&N);
    if (M < N || N < 1){
        printf("Error: M < N || N < 1");
        return -1;
        }
    while(i != 0){
        i = M%N;
        M = N;
        N = i;
        }
    printf("GCD is %d\n",M);
    getch();
    return 0;
}
