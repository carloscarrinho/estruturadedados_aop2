#include <stdio.h>

int main()
{
  int num1, num2, sum;

  printf("\nPor favor, digite um número inteiro: \n");
  scanf("%d", &num1);
  printf("\nPor favor, digite outro número inteiro: \n");
  scanf("%d", &num2);

  sum = num1 + num2;

  printf("\nO resultado da soma entre %d e %d é igual a %d\n", num1, num2, sum);

  return (0);
} 