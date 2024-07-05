#include <stdio.h>

//Given 3 positive numbers (read from the keyboard), display all possible sums of 2 numbers. 
//The display should highlight the summands as well as the sum itself. For example, for the numbers 1, 2, 3,
//the output should be: 1+2=3, 1+3=4, 2+3=5.

//@aam.codes

int main () {

    int a,b,c;

    printf ("a = ");
    scanf ("%d", &a);
    printf ("b = ");
    scanf ("%d", &b);
    printf ("c = ");
    scanf ("%d", &c);

    printf ("%d + %d = %d\n", a, b, a + b);
    printf ("%d + %d = %d\n", a, c, a + c);
    printf ("%d + %d = %d\n", b, c, b + c);
   
    
    printf  ("\tby @aam.codes");

    return 0;
}
