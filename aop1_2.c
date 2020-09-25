#include <stdio.h>

int main()
{
  int m, n, i;

  do
  {
    printf("Digite um numero: ");
    scanf("%d", &m);

  } while (m < 0);
  
  n=0;
  i=1;

  while (m >= i)
  {
    m = m - i;
    i = i + 2;
    n++;
    printf("m - %d, i - %d, n - %d\n", m, i, n);
  }

  printf("Parte inteira da raiz quadrada: %d", n);
  
  return 0;
}