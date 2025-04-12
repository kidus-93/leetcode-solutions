#include <stdio.h>

int main() {
    // int arr[100], n, sum = 0;
    // int *ptr;
    // ptr = arr;

    // printf("Enter the number of elements (max 100): ");
    // scanf("%d", &n);

    // printf("Enter %d elements:\n", n);
    // for (int i = 0; i < n; i++) {
    //     scanf("%d", &arr[i]);
    //     sum += *ptr;
    //     ptr++;
    // }

    // printf("Sum of array elements = %d\n", sum);

    // return 0;


    FILE *file;
    char line[256];

    file = fopen("file.txt", "w");
    // if (!file) {
    //     printf("Error creating file\n");
    //     return 1;
    // }
    fprintf(file,"Hello World!");
    fclose(file);

}