// Write a program to swap values of two int variables without using a third variable
#include <stdio.h>
int main(){
    int x,y;
    x = 5;
    y = 6;
    printf("Before Swap : %d %d \n",x,y);
    x = x+y;
    y = x-y;
    x = x-y;
    printf("After Swap : %d %d",x,y);
    return 0;
}