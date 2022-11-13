// 18. Write a program which takes the month number as an input and display number of 
// days in that month
#include <stdio.h>
int main(){
    int month_num;
    printf("Enter Month number : ");
    scanf("%d",&month_num);
    if(month_num>=1 && month_num<=12){
    if ((month_num % 2==0 && month_num<=6) || (month_num == 9 || month_num ==11))
        printf("30 Days");
    else
        printf("31 days");
    }else{
        printf("Invalid month");
    }
    
    return 0;
}