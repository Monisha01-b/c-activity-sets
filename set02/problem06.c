//Write a program to reverse a string.

#include <stdio.h>
#include <string.h>

void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

int main() {
    char str[100], rev_str[100];

    input_string(str);
    str_reverse(str, rev_str);
    output(str, rev_str);

    return 0;
}

void input_string(char *a) {
    printf("Enter a string: ");
    scanf("%s", a);
}

void str_reverse(char *str, char *rev_str) {
    int i, j;
    int len = strlen(str);

    for (i = 0, j = len - 1; i < len; ++i, --j) {
        rev_str[i] = str[j];
    }
    rev_str[i] = '\0'; // Terminate the reversed string
}

void output(char *a, char *reverse_a) {
    printf("Original string: %s\n", a);
    printf("Reversed string: %s\n", reverse_a);
}
