#include <stdio.h>

//Given 3 positive numbers (read from the keyboard), display all possible sums of 2 numbers. 
//The display should highlight the summands as well as the sum itself. For example, for the numbers 1, 2, 3,
//the output should be: 1+2=3, 1+3=4, 2+3=5.

//@aam.codes

int main () {

    int a, b, c;

    printf("Enter three positive numbers:\n");
    scanf("%d %d %d", &a, &b, &c);

    // Iterate through all possible combinations
    //of 2 numbers from the 3
    for (int i = 1; i <= 3; i++) {
        for (int j = i + 1; j <= 3; j++) {
            
            int sum = 0;
            
            // Calculate the sum of the 2 numbers
            if (i == 1 && j == 2) {
                sum = a + b;
            } else if (i == 1 && j == 3) {
                sum = a + c;
            } else if (i == 2 && j == 3) {
                sum = b + c;
            }

            // Display the sum and the two terms
            printf ("%d+%d=%d\n", i == 1 ? a : (i == 2 ? b : c), j == 1 ? a : (j == 2 ? b : c), sum);
        }
    }

    printf ("\t@aam.codes");

    return 0;
}
