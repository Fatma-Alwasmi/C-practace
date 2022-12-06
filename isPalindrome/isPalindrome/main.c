#include <stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

bool isPalindrome(char str[]) {
    
    
    int len = strlen(str); //gets the length of array str.
    bool val = false; // bool variables assigned to false.

    // a loop that compares first and last element in str, then the second first and second last ans so on. and if they are equal, val is assigned to true.
    for (int i = 0; i < len; i++) {
        if (str[i] == str[len - 1 - i]) {
            val = true;
        }
    }

    printf("%i\n", val);
    return val;

}
