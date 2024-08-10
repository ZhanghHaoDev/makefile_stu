#include <stdio.h>

#include "./math/math.h"

int main() {
    int a = 1;
    int b = 2;
    int c = add(a, b);
    printf("%d + %d = %d\n", a, b, c);
    return 0;
}