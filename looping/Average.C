#include <stdio.h>
int main()
{
   int num,total=0;
   float avg;
   printf("Enter number \n");
   scanf("%d",&num);
   for(int i=0;i<=num;i++)
   {
    total=total+i;
   }
   avg=(float)total/num;
   printf("%d\n",total);
   printf("%f",avg);
    return 0;
}
