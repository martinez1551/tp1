#include <stdio.h>

int cuadrado(int num);
void cuadrado_void(int num);
void mostrar_direc_y_cont(int var);
void Invertir(int *a, int *b);
void orden(int *a, int *b);
// f)
int main() {
    int num1, num2;
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    // a) 
    int result = cuadrado(num1);
    printf("El cuadrado de %d es: %d\n", num1, result);

    // b) 
    cuadrado_void(num2);

    // c) 
    mostrar_direc_y_cont(num1);
    mostrar_direc_y_cont(num2);

    // d) 
    printf("Antes de invertir: num1 = %d, num2 = %d\n", num1, num2);
    Invertir(&num1, &num2);
    printf("Despues de invertir: num1 = %d, num2 = %d\n", num1, num2);

    // e) 
    orden(&num1, &num2);
    printf("Despues de ordenar: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

// a) 
int cuadrado(int num) {
    int resultado;
    resultado = num * num;
    return resultado;
}

// b) 
void cuadrado_void(int num) {
    printf("El cuadrado de %d es %d\n", num, num * num);
}

// c) 
void mostrar_direc_y_cont(int var) {
    printf("Contenido de la variable: %d\n", var);
    printf("Direccion de la variable: %p\n", &var);
}

// d) 
void Invertir(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

// e) 
void orden(int *a, int *b) {
    if (*a > *b) {
        int aux = *a;
        *a = *b;
        *b = aux;
    }
}