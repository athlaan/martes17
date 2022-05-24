#include <stdio.h>
#include <stdlib.h>

int main(int argc, char  *argv[]) {
  int a [7];
  for (int i = 1; i < 7 ; i++) {
   a[i] = i;
   printf("%d ", a[i]);
 }
 printf("\n");
  for (int k = 6; k > 0; k--) {
   a[k] = k;
   printf("%d ", a[k]);
  }

  return 0;
}
