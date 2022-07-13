#include <stdio.h>
int main()
{
    float A,R;
    printf("Enter radius of the circle:");
    scanf("%f",&R);
    A=3.14*R*R;
    printf("Area of circle is %f having the radius %f",A,R);
    return 0;

}