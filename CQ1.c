/*
Information and Communications Technology by Professor Mujibur Rahman
Chapter 5 - C Programming, Creative Sample Questions, Page 375 (July 2016 Edition)
                                CQ 1
Difficulty:
    Bare bone Basics
Topics Covered:
    Declarations, User Input, Console Printing, Computer Arithmetics, Console Functions
Reference:
    Math teacher Farhan Uddin was lecturing about functions in his class.
    At one stage, he wrote the function f(x) = pow(x,5) + 5*pow(x,3) -2*x + 3
    on the board. Then, he told that for every value of x an f(x) can be
    calculated. Sumaiya asked him, "Sir, it's pretty hard for us to calculate
    every single value of f(x) for such amount of x. Can't we do it through
    a computer?" As the reply to her question or errand, Farhan wrote a C program
    to do just that

    //A,B and C are not relevant

    //D) From the function in the given stem, write a C program that calculates the
    values of x given through keyboard input


Solution:
    1. Targets:
        . Take a keyboard input
        . Calculate the value of f(x)
        . print the result
    2. Respective functions:
        .scanf()
        .arithmetic operations
        .printf()

*/

//Step 1: Preprocessors
#include <stdio.h>  //printf, scanf
#include <conio.h>  //getch
#include <math.h>   //pow

//Step 2: the main function
int main(){
         //Target 1: Take a keyboard input
         int x, fx;
         printf("Enter the value of x : ");
         scanf("%d",&x);

         //Target 2: Calculate the value
         fx = pow(x,5) + 5*pow(x,3) - 2*x + 3;

         //Target 3: Print the value to the user
         printf("The value of f(x) will be..... %d", fx);
         getch(); //Waits for a random keystroke

         return 0; //It is programming tradition to return 0 if all before programmes ran successfully, otherwise, -1 or predetermined values are returned instead of 0
         }

//Line 40: '&x' is equals to the *address/position_number* in the RAM where the 'x' is stored
