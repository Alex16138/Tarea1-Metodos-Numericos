#include <stdio.h>

void limpiar_buffer() {
    while (getchar() != '\n');
}

int main() {
    int opcion;
    double a, b;

    do {
        printf("\n--- CALCULADORA ---\n");
        printf("1. Suma\n2. Resta\n3. Multiplicacion\n4. Division\n5. Salir\n");
        printf("Seleccione una opcion: ");

        if (scanf("%d", &opcion) != 1) {
            printf("Error: Entrada no valida. Debe ingresar un numero.\n");
            limpiar_buffer();
            continue;
        }

        if (opcion == 5) break;
        if (opcion < 1 || opcion > 5) {
            printf("Opcion invalida. Intente de nuevo.\n");
            continue;
        }

        printf("Ingrese el primer numero: ");
        if (scanf("%lf", &a) != 1) {
            printf("Error: Entrada no valida.\n");
            limpiar_buffer();
            continue;
        }

        printf("Ingrese el segundo numero: ");
        if (scanf("%lf", &b) != 1) {
            printf("Error: Entrada no valida.\n");
            limpiar_buffer();
            continue;
        }

        switch (opcion) {
            case 1: printf("Resultado: %.17g\n", a + b); break;
            case 2: printf("Resultado: %.17g\n", a - b); break;
            case 3: printf("Resultado: %.17g\n", a * b); break;
            case 4:
                if (b == 0) {
                    printf("Error: Division entre cero no permitida.\n");
                } else {
                    printf("Resultado: %.17g\n", a / b);
                }
                break;
        }
    } while (opcion != 5);

    return 0;
}

