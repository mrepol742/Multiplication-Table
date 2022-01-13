#include <stdio.h>

int main() {
    int i= 1;
    while (i <= 10) {
        for (int j = 0; j < 11; j++) {
            printf("%d x %d == %d\n", i, j, i * j);
        }
        i++;
    }
    return 0;
}