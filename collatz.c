
#include <stdio.h>


int collatz_sequence_length(int n) {
    int length = 0;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        length++;
    }
    return length + 1; 
}

int main() {
    FILE *inputFile = fopen("input.txt", "r");
    FILE *outputFile = fopen("output.txt", "w");

    if (inputFile == NULL || outputFile == NULL) {
        perror("File open error");
        return 1;
    }

    int lower, upper;
    while (fscanf(inputFile, "%d %d", &lower, &upper) == 2) {
        int max_length = 0;

        for (int n = lower; n <= upper; n++) {
            int length = collatz_sequence_length(n);
            if (length > max_length) {
                max_length = length;
            }
        }

        fprintf(outputFile, "%d\n", max_length);
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
