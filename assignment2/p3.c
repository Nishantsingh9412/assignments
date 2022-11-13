// Write a program to swap values of two int variables
#include <stdio.h>
int main(){
    int x,y,t;
    x = 5;
    y = 6;
    printf("Before Swap : %d %d \n",x,y);
    t = x;
    x=y;
    y=t;
    printf("After Swap : %d %d",x,y);
    return 0;
}