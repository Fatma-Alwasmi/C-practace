#include <stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

void sort(int array[], int length) {

    //nested loop. first loop loops length times. second loop comapres every element to the element after it and swaps them if the second element is smaller than the first element. algorithym used is bubble sort.
        for (int i = 0; i < length; i++) {
            for (int j = 0; j < length - 1; j++) {
                if (array[j] > array[j + 1]) {
                    int temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                }
            }

        }
        for (int i = 0; i < length; i++) {
            printf(" %i", array[i]);
        }
    }
