
#include <stdio.h>

int main() {
    int number[5];
    int max, min;

    for (int i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &number[i]);

        if (i == 0) {
            max = number[i];
            min = number[i];
        }
        else {
            if (number[i] > max) {
                max = number[i];
            }

            if (number[i] < min) {
                min = number[i];
            }
        }
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}
