#include <stdio.h>

void pattern (int n) {
    int i, j;
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= n; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main () {
    pattern(5);

    return 0;
}
