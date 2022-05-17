#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int a[7];
  int n = 7;
  for (int i = 0; i < n; i++) {
   a[i] = rand() % 10;
   printf("%d ", a[i]);
  }
  printf("\n");

  //a[0] = 6;
 //a[1] = 5;
 //a[2] = 2;
 //printf("%d" , a[6] );
 //int a[] = {6,5,2,-2,3,7,10};


return 0;
}
