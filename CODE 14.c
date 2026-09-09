/*Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/
#include <stdio.h>
 main()
{char alfa;
printf("ENTER YOUR ALPHABET");
scanf("%c",&alfa);
if(alfa=='a' || alfa=='e' ||  alfa=='i' || alfa=='o' || alfa=='u' ||
alfa=='A' || alfa=='E' ||  alfa=='I' || alfa=='O' || alfa=='U')
{printf("Vowel\n");}
else{printf("Consonant");}

return 0;
}
