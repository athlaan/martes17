#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(NULL));
  int i = 0;
  while (i < 20) {
    int r = rand() % 100;
    printf("%d ", r);
    i++;
  }
  printf("\n");
  return 0;
}
