#include <stdio.h>
#include <stdlib.h>


int main(int argc, char  *argv[]) {
 int n = atoi(argv[1]);
 int m = 1;
 while (m <= n) {
   int i = 2;
   while (i < n - 1) {
     if (n % i == 0) {
      printf("%d no es primo\n", m);
      break;
    }
    i++;
   }
   if (i == m - 1 || m == 2)
   printf("%d es primo\n", m);
   m++;
 }

  return 0;
}
