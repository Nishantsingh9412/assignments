// 5. Write a program to print the first 10 odd natural numbers in reverse order.
#include <stdio.h>
int main(){
    int count = 0;
    for(int i=100;i>=0;i--){
        if(i%2 != 0){
            count++;
            if (count<=10)
                printf("%d \n",i);
        }            
        else
            continue;
    }   
    return 0;
}