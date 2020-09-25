#include <stdio.h>
int testPalindrome (int numb)
{
  int isPalindrome, reversedNumb = 0, rest, n = numb;

  while (n != 0) {
    rest = n % 10;
    reversedNumb = reversedNumb * 10 + rest;
    n /= 10;
  }

  if (numb == reversedNumb) {
    isPalindrome = 0;
  } else {
    isPalindrome = 1;
  }

  return isPalindrome;
}

int main ()
{
  int number, isPalindrome;
  
  do
  {
    printf("Por favor digite um número inteiro maior que 100: ");
    scanf("%d", &number);

  } while (number < 100);

  isPalindrome = testPalindrome(number);

  if(isPalindrome == 0) {
    printf("O número lido é um palíndromo.\n");
  } else {
    printf("O número lido NÃO é um palíndromo.\n");
  }

  return 0;
}