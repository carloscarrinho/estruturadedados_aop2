#include <stdio.h>

int main ()
{
  int base, valor, resultado;

  do
  {
    printf("Digite a base da tabuada: ");
    scanf("%d", &base);

  } while (base < 1);
  
  valor = 1;
  printf("Tabualda de %d\n", base);

  while (valor <= 10)
  {
    resultado = base*valor;
    printf("%d x %d = %d\n", base, valor, resultado);
    valor++;
  }
  
  return 0;
}