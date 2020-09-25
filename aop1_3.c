#include <stdio.h>

int main()
{
  int A, B, L, S;

  printf("Digite um valor para A: ");
  scanf("%d", &A);
  printf("Digite um valor para B: ");
  scanf("%d", &B);
  S = 0;

  for(L = A; L <= B; L++)
    S = S + L;

  printf("Somatorio: %d", S);
  
  return 0;
}