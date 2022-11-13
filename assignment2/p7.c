// Write a program to find the position of first 1 in LSB.
#include<stdio.h>
int main()
{
 int n ;
 printf("Enter a Number : ");
 scanf("%d",&n);
 int count = 0,result = 0;
 while (n!=0)
 {
    result = n&1;
    count++;
    if(result==1){
        printf("%d",count);
        break;
    }
    n = n>>1;
 }
 return 0;
}