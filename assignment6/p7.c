// 7. Write a program to count digits in a given number
#include <stdio.h>
int main(){
    int n,rem,count=0;
    printf("Enter Value of n ");
    scanf("%d",&n);
    while(n){
        rem = n%10;
        n = n/10;
        count++;
    }
    printf("%d",count);
    return 0;
}
