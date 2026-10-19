//write a program that takes two intrger and display sum


#include<stdio.h>
int main ()
{
    int num1, num2;
    printf("Enter two number:");
    scanf("%d %d", &num1,&num2);


    int sum = num1 + num2;
    printf("The sum is = %d\n", sum);


    float avg =(float) sum/2;
    printf(" The average is = %.2f\n",avg);

    
    return 0;
}


