/*
Information and Communications Technology by Professor Mujibur Rahman
Chapter 5 - C Programming, Creative Sample Questions, Page 375 (July 2016 Edition)
                                CQ 7
Difficulty:
    Bare bone Basics
Topics Covered:
    Declarations, User Input, Console Printing, Computer Arithmetics, Console Functions
Reference:
    Find the n-th term and the sum of all integers until the n-th in an arithmetic series
    starting with a and with common difference of d


    //A,B and C are not relevant

    //D) From the function in the given stem, write a C program that checks
    if the numbers taken through keyboard input are even or odd numbers


Solution:
    1. Targets:
        . Take three keyboard inputs
        . apply the formulas
        . print the results
    2. Respective functions:
        .scanf
        .the formulas
        .printf
    3. The formulas:
        . n-th term = a+(n-1)*d
        . summation until n-th term = ( n*( 2*a+( n-1 )*d ) )/2
*/
#include <stdio.h>
#include <conio.h>

int main(){
    int a,n,d,N,S;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter d: ");
    scanf("%d",&d);
    printf("Enter n: ");
    scanf("%d",&n);

    N = a+(n-1)*d;
    S = (n*(2*a+(n-1)*d))/2;

    printf("N is = %d\n",N);
    printf("S is = %d\n", S);

    return 0;
    }
