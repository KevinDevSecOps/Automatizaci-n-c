#include <stdio.h>
#include <assert.h>

// Declaración de la función a probar
int suma(int a, int b);

void test_suma() {
    assert(suma(2, 3) == 5);
    assert(suma(-4, 4) == 0);
    assert(suma(0, 0) == 0);
    printf("Todos los tests pasaron correctamente.\n");
}

int main() {
    test_suma();
    return 0;
}
