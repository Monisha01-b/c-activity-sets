// /Write a program to find the index of a substring of a string

#include <stdio.h>
#include <string.h>

void input_string(char* a, char* b);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);

int main() {
    char string[100], substring[100];
    int index;

    input_string(string, substring);
    index = sub_str_index(string, substring);
    output(string, substring, index);

    return 0;
}

void input_string(char* a, char* b) {
    printf("Enter the main string: ");
    scanf("%s", a);

    printf("Enter the substring: ");
    scanf("%s", b);
}

int sub_str_index(char* string, char* substring) {
    int len1 = strlen(string);
    int len2 = strlen(substring);
    int i, j;

    for (i = 0; i <= len1 - len2; i++) {
        for (j = 0; j < len2; j++) {
            if (string[i + j] != substring[j])
                break;
        }
        if (j == len2)
            return i; // Substring found at index i
    }
    return -1; // Substring not found
}

void output(char *string, char *substring, int index) {
    if (index != -1)
        printf("'%s' is found in '%s' at index %d.\n", substring, string, index);
    else
        printf("'%s' is not found in '%s'.\n", substring, string);
}
