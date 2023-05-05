#include <stdio.h>

#define BUFFER_SIZE 10

void print_buffer(const char *buffer, size_t size) {
       	size_t i;

	for (i = 0; i < size; i += BUFFER_SIZE) {
		size_t j;
		printf("%08zx: ", i);
		for (j = i; j < i + BUFFER_SIZE; j++) {
		       	if (j < size) {
     printf("%02x", buffer[j]);
            } else {
                printf("  ");
            }

            if (j % BUFFER_SIZE == BUFFER_SIZE / 2 - 1) {
                printf(" ");
            }
        }

        printf(" ");

        for (j = i; j < i + BUFFER_SIZE && j < size; j++) {
            if (buffer[j] >= 32 && buffer[j] <= 126) {
                printf("%c", buffer[j]);
            } else {
                printf(".");
            }
        }

        printf("\n");
    }
}
