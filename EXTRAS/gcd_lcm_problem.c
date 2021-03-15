/**
 * @file gcd_lcm_problem.c
 * @author 4lr4zi (abar.toha)
 * @brief
 * Problem:
 *  find all (a,b) for:
 *      lcm(a,b) - gcd(a,b) = SOL
 *      when SOL = 143 (infact, SOL can be anything)
 * @version 1.0
 * @date 2021-03-15
 * 
 * @copyright No Copyright
 * 
 */

#include <stdio.h>

#define SOL 143

int gcd(int a, int b);
int lcm(int a, int b);

int main(){

    int x,y, sol;

    //SCANF SEQ
    //printf("Enter the solution: ");
    //scanf("%d",&sol);

    for (x = 1; x <= SOL*2; x++){
        for (y = 1; y < x; y++){
            if ((lcm(x,y) - gcd(x,y)) == SOL){
                printf("(%d\t%d)\n",x,y);
            }
        }
    }

    return 0;
}

int gcd(int a, int b){
    int res, _gcd;
    for (res = 1; res <= a && res <= b; ++res){
        if (a%res == 0 && b%res == 0){
            _gcd = res;
        }
    }
    return _gcd;
}

int lcm(int a , int b){
    int res, _lcm;
    
    return (a*b)/gcd(a,b);
}