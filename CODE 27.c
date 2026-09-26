//Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include<stdio.h>
main()
{
    int a,sum=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    for(int i=1;i<=a;i+=2)
    {
        sum+=i;
    }
    printf("Sum of first %d odd numbers = %d",a,sum);
    return 0;
}
