#include <stdio.h>

int main() {
    /*PUNTO 3A*/
    printf("Hola, mundo!\n");

/*PUNTO 3C: veo el archivo .gitignore, README.md y tp1_1.c. A mi parecer no hay algun archivo que no deba estar*/
/*PUNTO 3E*/
 int variable = 30;
 int *puntero;
 puntero = &variable;

 printf("Contenido del puntero: %d\n", *puntero);

 printf("Direccion de memoria almacenada por el puntero: %p\n", puntero);

 printf("Direccion de memoria de la variable: %p\n", &variable);

 printf("Direccion de memoria del puntero: %p\n", &puntero);

 printf("Tamanio de la variable en memoria: %zu bytes\n", sizeof(variable));

}
