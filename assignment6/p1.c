// 1. Write a program to calculate sum of first N natural numbers
#include <stdio.h>
int main(){
    int n,sum=0;
    printf("Enter value of n : ");
    scanf("%d",&n);
        int i = 0;
        while(i<=n){
            sum += i;
            i++;
        }
        printf("%d",sum);
    return 0;
}