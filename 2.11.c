#include<stdio.h>

void swap(int *x, int *y) {
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

int main() {
    int x = 1;
    int y = 1;
    swap(&x, &y);
    printf("%d, %d\n", x, y);
    return 0;
}