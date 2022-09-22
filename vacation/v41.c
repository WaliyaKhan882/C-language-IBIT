#include <stdio.h>
//program to find a number is prime or not
int main() {
int number, i, flag = 0;
  printf("Enter a positive integer: ");
  scanf("%d", &number);

  // 0 and 1 are not prime numbers
  // change flag to 1 for non-prime number
  if (number == 0 || number == 1)
    flag = 1;

  for (i = 2; i <= number / 2; i++) {

    // if n is divisible by i, then n is not prime
    // change flag to 1 for non-prime number
    if (number % i == 0) {
      flag = 1;
      break;
    }
  }

  // flag is 0 for prime numbers
  if (flag == 0)
    printf("%d is a prime number.", number);
  else
    printf("%d is not a prime number.", number);

  return 0;
}
