#include <stdio.h>
#include <string.h>


// how func but reverse
void cnuf (char *string,const size_t length) {
    if (string == NULL) return ;
    char *right = &string[length-1];
    char *left = &string[0];


    while (left < right) {
        char temp = *left;
        left = right;
        *right = temp;

        left++;
        right--;





    }
}


