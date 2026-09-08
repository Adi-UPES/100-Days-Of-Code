/*Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include<stdio.h>
main()
{int a;
int b,c,d;
printf("Input Seconds=");
scanf("%d",&a);
b=a/3600;
c=(a % 3600) /60;
d=a%60;
printf ("Converted Time = %d :%d :%d",b,c,d);
return 0;
}
