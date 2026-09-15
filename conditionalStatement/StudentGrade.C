#include<stdio.h>
int main()
{
    int maths,english,Hindi,Computer,Science;
    printf("enter Subject marks:");
    scanf("%d",&maths);
    scanf("%d",&english);
    scanf("%d",&Hindi);
    scanf("%d",&Computer);
    scanf("%d",&Science);
    int marks=maths+english+Hindi+Computer+Science;
    float avg=marks/5.0;
    printf(" Average marks is: %f \n",avg);
    if(avg<=100 &&avg>80)
    {
        printf("grade is'A' ");
    }
    else if(avg<=80 && avg>60)
    {
        printf("grade is 'B'");
    }
    else if(avg<=60 && avg>45)
    {
        printf("grade is 'C'");
    }
    else if(avg<=45 && avg>33)
    {
        printf("Grade is 'E'");
    }
    else
    {
        printf("Fail");
    }


    return 0;

}
