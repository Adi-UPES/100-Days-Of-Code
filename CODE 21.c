/*Q21: Write a program to display the month name and number of days using switch-case for a given month number.

/*
Sample Test Cases:
Input 1:
2
Output 1:
February, 28 days

Input 2:
12
Output 2:
December, 31 days

*/
#include<stdio.h>
main()
{int a;
printf("Enter MONTH!");
scanf("%d",&a);
switch(a){
	case 1:
		printf("JANUARY ,31 DAYS");
		break;
			case 2:
		printf("FEBRAURY ,28 DAYS");
		break;
			case 3:
		printf("MARCH , 31 DAYS");
		break;
			case 4:
		printf("APRIL , 30 DAYS");
		break;
			case 5:
		printf("MAY , 31 DAYS");
		break;
			case 6:
		printf("JUNE , 30 DAYS");
		break;
			case 7:
		printf("JULY , 31 DAYS");
		break;
			case 8:
		printf("AUGUST , 30 DAYS");
		break;
			case 9:
		printf("SEPTEMBER , 31 DAYS");
		break;
			case 10:
		printf("OCTUBER , 30 DAYS");
		break;
			case 11:
		printf("NOVEMBER , 31 DAYS");
		break;
			case 12:
		printf("DECEMBER , 30 DAYS");
		break;
		
	
	
}

return 0;
}
