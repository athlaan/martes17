#include <stdio.h>
#include <stdlib.h>

//Escribir un programa que imprima los numeros en el intervalo del 1 al 100 que al ser divididos por un argumento entero n, su resto sea igual a 3. Dibujar el diagrama de flujo.

int main(int argc, char *argv[]) {
 int n = atoi(argv[1]);
 int r = (rand() % 100) + 1;
 if(r % n == 3) printf(""\n", r);
  return 0;

}
