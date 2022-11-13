#include <stdio.h>
int main(){
    int radius;
    printf("Enter Radius : ");
    scanf("%d",&radius);
    // printf("%d",radius);
    float area;
    area = 3.14*radius*radius;
    printf("\" Area of circle is %.2f having the radius %d  \" ",area,radius);
    return 0;
}