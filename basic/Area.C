#include<stdio.h>
int main()
{
    float radius,length,breadth,side;
    float AreaOfCircle,AreaOfRectangle,AreaOfSquare;
    printf("Enter radius of circle:");
    scanf("%f",&radius);
    printf("Enter length and breadth of rectangle:");
    scanf("%f%f",&length,&breadth);
    printf("Enter side of square");
    scanf("%f",&side);
    AreaOfCircle=3.14*radius*radius;
    AreaOfRectangle=length*breadth;
    AreaOfSquare=side*side;
    printf("%f\n",AreaOfCircle);
    printf("%f\n",AreaOfRectangle);
    printf("%f\n",AreaOfSquare);
    return 0;


}
