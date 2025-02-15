#include<stdio.h>
#define PI 3.1416

float funarea(float r)
{
    float area;
    area = PI * r * r;
    return area;
}

int main()
{
    float  r;
    printf("print the radius value : ");
    scanf("%f",&r);

    printf("print area of circle = %.2f", funarea(r));

    return 0;

}
