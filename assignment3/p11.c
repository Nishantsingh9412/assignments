// Write a program to take marks of 5 subjects from the user. Assume marks are given 
// out of 100 and passing marks is 33. Now display whether the candidate passed the 
// examination or failed.
#include <stdio.h>
int main(){
    int a[10];
    int count = 0;
    printf("Enter 5 Subjects marks :\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Marks : ");
        scanf("%d",&a[i]);
        if(a[i] >= 33)
            continue;
        else
            count++;
    }
        if(count>0)
            printf("Better Luck next Time ");
        else
            printf("Passed Hurrah !!!!!!");
    return 0;
}