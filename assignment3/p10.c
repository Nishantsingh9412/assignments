// 10. Write a program which takes the cost price and selling price of a product from the 
// user. Now calculate and print profit or loss percentage.

#include<stdio.h>
int main()
{
    int cp,sp,profit,loss;
    printf("Enter the value of cp,sp");
    scanf("%d %d",& sp,&cp);
    if( sp-cp*100/cp>=0)
    { printf("%d is  profit",profit);}
    else {
        printf("%d is loss",loss);
    }

}