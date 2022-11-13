// 9. Write a program to find the greatest among three given numbers.
//  Print number once 

#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter Three nums : ");
    scanf("%d %d %d",&a,&b,&c);
    printf("%d", a>b? a>c ?a:c : b>c ? b:c);
    return 0;
}