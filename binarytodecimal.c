// convert binary to decimal

#include <stdio.h>
#include <math.h>
int convert(long long);

int main() {
  long long n;
  printf("Enter a binary number: ");
  scanf("%lld", &n);
  printf("%lld in binary = %d in decimal", n, convert(n));
  return 0;
}
int convert(long long n) {
  int dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    printf("value of remainder %d\n",rem);
    n /= 10;
    printf("value of n %lld\n",n);
    dec += rem * pow(2, i);
    printf("value of dec %d\n",dec);
    ++i;
  }

  return dec;
}