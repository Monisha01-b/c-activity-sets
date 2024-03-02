//Write a program to find the index of the largest number in an array

#include <stdio.h>

int input_size();
void input_array(int n, int a[n]);
int find_largest_index(int n, int a[n]);
void output(int index);

int main() {
    int size, index;

    size = input_size();
    int array[size];
    input_array(size, array);
    index = find_largest_index(size, array);
    output(index);

    return 0;
}

int input_size() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    return size;
}

void input_array(int n, int a[n]) {
    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}

int find_largest_index(int n, int a[n]) {
    int largest_index = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > a[largest_index]) {
            largest_index = i;
        }
    }
    return largest_index;
}

void output(int index) {
    printf("The index of the largest number in the array is: %d\n", index);
}
