//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
#include<stdio.h>
main()
{
    int a,fact=1;
    printf("Enter a number: ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        fact*=i;
    }
    printf("Factorial of %d = %d",a,fact);
    return 0;
}
