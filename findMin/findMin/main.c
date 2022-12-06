#include <stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

int findMin(int* nums, int numsSize) {
    // creates an int variable min and assigns it to the first element that nums point to.
        int min = *nums;
        
            // a loop that compares elements in the array that nums is pointing to.
            for (int i = 0; i < numsSize; i++) {

                if(min > *nums) {
                    min = *nums;
                }
                //increment pointer to point to the next element in array.
                nums++;
       
        }
         printf("%i\n", min);
        return min;
    }

