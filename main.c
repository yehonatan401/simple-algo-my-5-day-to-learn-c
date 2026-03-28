#include <stdio.h>
#include <string.h>


// how func but reverse
char* cnuf (char *string,const size_t length) {
    if (string == NULL) return NULL;
    char *right = &string[length-1];
    char *left = &string[0];


    while (left < right) {
        char temp = *left;
        *left = *right;
        *right = temp;

        left++;
        right--;





    }
    return string;
}


int main() {
    char string[] = "Hello world!";
    printf("%s\n", cnuf(string, strlen(string)));
}
