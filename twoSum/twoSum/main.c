#include <stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

int* twoSum(int* nums, int numsSize, int target) {
        int out[] = { 0,0 };
        int* sum = (int*)malloc(2*sizeof(int)); //creates space in heap size of 2.
        int* ptr = nums; // pointer to point to elements that nums points to
        
        // loop that modifies array out to the elements that nums and ptr are pointing to that add up to target.
        for (int i = 0; (i < numsSize) && (out[0] + out[1] != target); i++) {
            //nested loop that compares what nums is pointing to, to every other element in array by using ptr.
            for (int j = 0; j < numsSize; j++) {
                if ((*nums + *ptr) == target) {
                    out[0] = *nums;
                    out[1] = *ptr;
                }
                else {
                    ptr++;// increment pointer to point to next element
                }
            }
            ptr = nums;// resets ptr
            nums++;// increment pointer to point to next element
        }
    //loop storing elements in out to sum
        for (int i = 0; i < (sizeof(out) / sizeof(out[0])); i++) {
            printf(" %i", out[i]);
            sum[i] = out[i];
        }
        return sum;


    }

