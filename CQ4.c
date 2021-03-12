/*
Information and Communications Technology by Professor Mujibur Rahman
Chapter 5 - C Programming, Creative Sample Questions, Page 375 (July 2016 Edition)
                                CQ 5
Difficulty:
    Bare bone Basics
Topics Covered:
    Declarations, User Input, Console Printing, Computer Arithmetics, Console Functions
Reference:
    Find all the prime numbers from M and N, where (M > N > 0) and M,N are keyboard
    inputs

    //A,B and C are not relevant

    //D) From the function in the given stem, write a C program that checks
    if the numbers taken through keyboard input are even or odd numbers


Solution:
    1. Targets:
        . Take two keyboard inputs
        . check every number in between if they are primes
        . print them
    2. Respective functions:
        .scanf
        .for loop and arithmetic
        .printf

*/

#include <stdio.h>
#include <conio.h>
int main(){
    //Step 1: Keyboard Inputs
    int M, N, is_Prime, i;
    printf("Enter M: ");
    scanf("%d", &M);
    printf("Enter N: ");
    scanf("%d", &N);

    //Additional Step: Check if M and N are valid
    if (M>N && M>0 && N>0){
        printf("M can't be bigger than N");
        return -1;
    }

    //Step 2: Find all the primes
    //Here the first Loop goes through all the numbers in between
    //the specified bounds, while the second loop tried to find whether
    //they are divisible or not
    printf("List of prime numbers between %d and %d\n",M,N);
    for (; M <= N; M++){
        is_Prime = 1;
        for (i = 2; i <= M/2; i++){
            if (M%i==0){
                is_Prime = 0;
                //printf("%d, %d\n",i,M); //I used this line to check if it's working
                break;
                }
            }
        if (is_Prime){
            printf("%d\n",M);
            }
        }

    return 0;
    }
