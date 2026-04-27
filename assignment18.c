#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], rev[100];
    int i, length = 0, isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str1);

    while(str1[length] != '\0') {
        length++;
    }
    printf("\nLength of string: %d\n", length);

    for(i = 0; i < length; i++) {
        rev[i] = str1[length - i - 1];
    }
    rev[length] = '\0';
    printf("Reversed string: %s\n", rev);

    printf("\nEnter another string for comparison: ");
    scanf("%s", str2);

    if(strcmp(str1, str2) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    for(i = 0; i < length; i++) {
        if(str1[i] != rev[i]) {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome)
        printf("The string is a Palindrome\n");
    else
        printf("The string is NOT a Palindrome\n");

    if(strstr(str1, str2) != NULL)
        printf("'%s' is a substring of '%s'\n", str2, str1);
    else
        printf("'%s' is NOT a substring of '%s'\n", str2, str1);

    return 0;
}