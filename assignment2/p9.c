//Write a program to print size of an int, a float, a char and a double type variable
#include <stdio.h>
int main(){
    int n;
    printf("%d \n",sizeof(n));
    float f;
    printf("%d \n",sizeof(f));
    double d;
    printf("%d \n",sizeof(d));
    char c;
    printf("%d \n",sizeof(c));

    return 0;
}