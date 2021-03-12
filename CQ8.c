/*
Information and Communications Technology by Professor Mujibur Rahman
Chapter 5 - C Programming, Creative Sample Questions, Page 375 (July 2016 Edition)
                                CQ 8
Difficulty:
    Mid echelon Basic, DEBUGGING, LOGIc, ARITHMETIC,
Topics Covered:
    Declarations, User Input, Console Printing, Computer Arithmetics, Console Functions
Reference:
    Find the GCD of M & N where M > N > 0, of course, M and N are keyboard inputs
    (Ex. 51%15 = 6 -> 15%6 = 3 -> 6%3 = 0 So GCD is 3)

    //A and B are not relevant

    //C) write the program to calculate the area

    //D)


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

#include <stdio.h>
#include <conio.h>
#include <math.h> //sqrt

int ansC();
int ansD();

int ansC(){
    double a,b,c;
    double s, A;
    //I am just leaving the keyboard input part for you to make up
    a = 3, b = 4, c = 5;
    if (a <= 0 || b <= 0 || c <= 0){
        return -1;
    }
    if ( a+b <= c || c+b <= a || a+c <= b){
        return -2;
    }
    s = (a+b+c)/2;

    A = (sqrt(s*(s-a)*(s-b)*(s-c)));

    printf("Area of the trinangle = %lf",A);

    return 0;
}

int ansD(){
    /*
        if we don't check whether:
            . any side of the triangle are not smaller than the sum of two others

                if,
                    a+b < c

                    a+b-c < 0

                    (a+b-c)/2 < 0

                    (s-c) < 0

                but (s-a), (s-b) and s will remain positive

                **SO** what will happen is:

                sqrt(+.+.+.-) , where the signs represent the polarity of the numbers
                and sqrt of a negative product will result in an imaginary result which
                is concerning


            . all of them are positive

                Can you ever draw a triangle with two sides? (Assuming it's planar geometry)
                length of a side being 0 means it does not exist

                It will give imaginary results too,
                If,
                    a = 0, then,
                        if b > c, (s-b) < 0 while other 3 terms are positive
                        if b < c, (s-c) < 0 while other 3 terms are positive
                The same can be applied for b or c being 0
    */
    return 0;
}

int main(){
    ansC();
    return 0;
}

