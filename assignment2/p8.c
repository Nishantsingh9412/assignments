// Write a program to check whether the given number is even or odd using a bitwise
// operator.
#include <stdio.h>

// Using Bitwise "And" Operator 
void method1(int n){
    // printf("%d \n",n&1);
    ((n&1) == 0) ? printf("even"): printf("odd");
}
// using bitwise "OR" operator 

void method2(int n){
    if((n|1) == (n+1)){
        printf("even");
    }else if((n|1) == n){
        printf("Odd");
    }else{
        printf("OYE");
    }
}
// using bitwise "XOR" operator 
void method3(int n){
    if((n^1)==(n+1))
        printf("even");
    else if((n^1) == (n-1)){
        printf("odd");
    }else{
        printf("OYE");
    }
}

int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    method3(n);
    return 0;
}
