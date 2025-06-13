#include <stdio.h>

int suma(int a, int b) {
    return a + b;
}

int main() {
    int resultado = suma(2, 3);
    printf("La suma de 2 y 3 es: %d\n", resultado);
    return 0;
}
