//Write a program to count the number of words in a string using strtok (_string.h_)

#include <stdio.h>
#include <string.h>

void input_string(char *a);
int count_words(char *string);
void output(char *string, int no_words);

int main() {
    char string[1000];
    int no_words;

    input_string(string);
    no_words = count_words(string);
    output(string, no_words);

    return 0;
}

void input_string(char *a) {
    printf("Enter a string: ");
    fgets(a, 1000, stdin);
}

int count_words(char *string) {
    int count = 0;
    char *token = strtok(string, " \n\t"); // strtok to split the string into words

    while (token != NULL) {
        count++;
        token = strtok(NULL, " \n\t");
    }
    
    return count;
}

void output(char *string, int no_words) {
    printf("The string \"%s\" contains %d words.\n", string, no_words);
}
