/*
Information and Communications Technology by Professor Mujibur Rahman
Chapter 5 - C Programming, Creative Sample Questions, Page 375 (July 2016 Edition)
                                CQ 2
Difficulty:
    Basic
Topics Covered:
    Declarations, User Input, Console Printing, Computer Arithmetics, Console Functions
Reference:
    Mifta reads in class 2 (lol). Today she learned about even numbers in her class. She learned that
    if any number is divisible by 2 it's an even number, otherwise it's an odd number. She thought it
    would be very difficult for her to do all that division by herself (lol square) so she asked her
    brother Miraz to write her a program that checks if any positive integer is an even or an odd number
    so that she can check the evenness or oddness through keyboard input

    //A,B and C are not relevant

    //D) From the function in the given stem, write a C program that checks
    if the numbers taken through keyboard input are even or odd numbers


Solution:
    1. Targets:
        . Take a keyboard input
        . Check if the number is a 'positive' 'integer'
        . print if it's even or odd
    2. Respective functions:
        .scanf()
        .conditional
        .arithmetic
        .printf

*/

#include <stdio.h>  //printf, scanf
#include <conio.h>  //getch
#include <math.h>   //floor()

int main(){
    double num;
    printf("Number: ");
    scanf("%d", &num);

    if (num < 1 || num - (int)num!=0){
        printf("Only positive and integer values are valid");
        getch();
        return -1; //NOTE that a return statement abruptly ends the function there, though I didn't use any else statement after the if block
    }

    if ((int)num%2==1){
        printf("Odd");
    }
    else{
        printf("Even");
    }

    getch();

    return 0;
}
