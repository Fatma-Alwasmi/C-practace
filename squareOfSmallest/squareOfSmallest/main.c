#include <stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

int squareOfSmallest(int array[], int length) {

    // assigns first element of array to int variable min,
    int min = array[0];

    // a loop that compares elements of the array to each other until it finds the smalleset element, then assigns it to min.
    for (int c = 0; c < length; c++) {

        if (array[c] < min) {

            min = array[c];
            }
        }
        // squares min (smallest element in array).
        int square = min * min;

        printf("%i\n", square);
        return square;
    }
