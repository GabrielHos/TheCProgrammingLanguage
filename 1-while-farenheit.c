int main() {
  int i = 0;
  int f = 1;
  while (i <= 120) {
    printf("%d%t%d\n", f, 5*(f-32)/9);
    i += 20;
    f = i;
  }
  return 0;
}
