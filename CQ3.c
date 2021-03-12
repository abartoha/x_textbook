/*
Information and Communications Technology by Professor Mujibur Rahman
Chapter 5 - C Programming, Creative Sample Questions, Page 375 (July 2016 Edition)
                                CQ 3
Difficulty:
    Bare bone Basics
Topics Covered:
    Declarations, User Input, Console Printing, Computer Arithmetics, Console Functions
Reference:
    Misbah reads in class 1. He is learning about vowels and consonants. He often sees
    his brother doing programming on the computer. Today he asked his brother to make
    him one program for this purpose, to learn which letters are vowels and which ones
    are consonants, of course, through keyboard input

    //A,B and C are not relevant

    //D) From the function in the given stem, write a C program that checks
    if the numbers taken through keyboard input are even or odd numbers


Solution:
    1. Targets:
        . Take a keyboard input
        . Check if the letter is vowel
        . print if it's even or odd
    2. Respective functions:
        .scanf
        .switch statements
        .print if it's vowel or consonant

*/

#include <stdio.h>  //printf, scanf
#include <conio.h>  //getch
#include <string.h> //strlwr

int main(){
    char letter;
    printf("Enter the letter: ");
    scanf("%c", &letter);
    //If you try



    switch(letter){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'U':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
            printf("%c is a Vowel", letter);
            break;
        default:
            if ((letter > 64 && letter < 91)||(letter > 96 && letter < 123)){ //Read ASCII table for
                printf("%c is a consonant", letter);
                break;
            }
            printf("This is not an alphabetical letter, most liekly a punctuation mark");
            break;
    }

    return 0;
}
