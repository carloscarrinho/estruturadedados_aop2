#include <stdio.h>
#include <stdlib.h>

int generateRandomNumber () 
{
  int n1, n2, result;

  n1 = rand() % 11;
  n2 = rand() % 1;
  result = n1 + n2;

  return result;
}

int main ()
{
  int result, try, attempts;

  result = generateRandomNumber();
  attempts = 1;

  printf("\nVocê tem três tentativas para acertar o resultado da soma entre dois números, vamos começar?\n");

  do
  {
    printf("\nTentativa %d, digite o seu palpite: \n\n", attempts);
    scanf("%d", &try);
    if (try == result)
    {
      printf("\nMiseravi, acertou!!");

    } else
    {
      printf("\nOpa, não foi dessa vez, tente novamente.");
      attempts++;
    }
    
  } while (try != result && attempts <= 3);
  
  printf("\nO resultado escondido é %d\n", result);

  return (0);
}