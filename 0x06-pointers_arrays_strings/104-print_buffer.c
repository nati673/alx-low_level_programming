#include <stdio.h>
#include "holberton.h"

#define BUFFER_SIZE 10

void print_buffer(char *b, int size)
{
    int i, j;

    for (i = 0; i < size; i += BUFFER_SIZE) {
        printf("%08x: ", i);
        for (j = i; j < i + BUFFER_SIZE; j += 2) {
            if (j < size) {
                printf("%02x%02x", b[j], b[j + 1]);
            } else {
                printf("     ");
            }
            printf(" ");
        }
        for (j = i; j < i + BUFFER_SIZE; j++) {
            if (j >= size) {
                break;
            }
            if (b[j] >= 32 && b[j] <= 126) {
                printf("%c", b[j]);
            } else {
                printf(".");
            }
        }
        printf("\n");
    }
}

int main(void)
{
    char buffer[98] = "This is a string!\nAnd this is the rest of the #buffer :)\n";
    char buffer2[98] = "This is a string!\nAnd this is the rest of the #buffer :)\n";
    int size = sizeof(buffer);

    print_buffer(buffer, size);
    printf("---------------------------------\n");
    printf("%s", buffer2);
    return (0);
}
