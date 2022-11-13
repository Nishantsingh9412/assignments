// 4. Write a program to calculate sum of squares of first N natural numbers
#include <stdio.h>
int main(){
    int n,sum=0,squares;
    printf("Enter Value of n : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        squares = i*i;
        sum+=squares;
    }
    printf("%d",sum);
    return 0;
}