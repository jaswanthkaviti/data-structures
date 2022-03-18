// convert decimal to binary

#include <stdio.h>
#include <math.h>

long long convert(int);

int main() {
  int n, bin;
  printf("Enter a decimal number: ");
  scanf("%d", &n);
  bin = convert(n);
  printf("%d in decimal =  %lld in binary", n, bin);
  return 0;
}

long long convert(int n) {
  long long bin = 0;
  int rem, i = 1;

  while (n!=0) {
    rem = n % 2;
    printf("remainder value is %d\n",rem);
    n /= 2;
    printf("value of decimal is %d\n",n);
    bin += rem * i;
    printf("value of binary is %lld\n",bin);
    i *= 10;
    printf("value of i %d\n",i);
  }

  return bin;
}