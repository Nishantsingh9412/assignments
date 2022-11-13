// 5. Write a program to calculate sum of cubes of first N natural numbers
#include <stdio.h>
int main(){
    int n,sum=0,cube;
    printf("Enter Value of n ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        cube = i*i*i;
        sum+=cube;
    }
    printf("%d",sum);
    return 0;
}