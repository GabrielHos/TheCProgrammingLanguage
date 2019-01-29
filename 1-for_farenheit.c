#include <stdio.h>

int main() {
  int f = 1;
  for (int i = 20;i <= 140;i += 20) {
    printf("%d\t%d\n", f, 5*(f-32)/9 );
    f = i;
  }
  return 0;
}
