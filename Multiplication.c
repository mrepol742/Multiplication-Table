#include <stdio.h>

int main() {
    printf("Enter 1-10: ");
    int num;
    int ten = 11;
    scanf("%d", &num);
    printf("\n");
    if (num == 1) {
        for (int i = 0; i < ten; i++) {
            printf("1 x %d == %d\n", i, i * num);
        }
    } else if (num == 2) {
        for (int i = 0; i < ten; i++) {
            printf("2 x %d == %d\n", i, i * num);
        }
    } else if (num == 3) {
        for (int i = 0; i < ten; i++) {
            printf("3 x %d == %d\n", i, i * num);
        }
    } else if (num == 4) {
        for (int i = 0; i < ten; i++) {
            printf("4 x %d == %d\n", i, i * num);
        }
    } else if (num == 5) {
        for (int i = 0; i < ten; i++) {
            printf("5 x %d == %d\n", i, i * num);
        }
    } else if (num == 6) {
        for (int i = 0; i < ten; i++) {
            printf("6 x %d == %d\n", i, i * num);
        }
    } else if (num == 7) {
        for (int i = 0; i < ten; i++) {
            printf("7 x %d == %d\n", i, i * num);
        }
    } else if (num == 8) {
        for (int i = 0; i < ten; i++) {
            printf("8 x %d == %d\n", i, i * num);
        }
    } else if (num == 9) {
        for (int i = 0; i < ten; i++) {
            printf("9 x %d == %d\n", i, i * num);
        }
    } else if (num == 10) {
        for (int i = 0; i < ten; i++) {
            printf("10 x %d == %d\n", i, i * num);
        }
    } else {
        printf("invalid range");
    }
    return 0;
}