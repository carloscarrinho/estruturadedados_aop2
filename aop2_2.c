#include <stdio.h>

void showMenu()
{
  printf("\nPROGRAMA DE CALCULO DE FIGURAS GEOMETRICAS:\n");
  printf("\n1 - Area do Circulo |");
  printf(" 2 - Area do Retangulo |");
  printf(" 3 - Volume da Esfera |");
  printf(" 4 - Volume do Paralelepipedo Retangulo |");
  printf(" 5 - Sair\n\n => ");
}

void calculateCircleArea()
{
  float area, radius;
  do
  {
    printf("Por favor, digite o tamanho do RAIO do circulo em metros:\n => ");
    scanf("%f", &radius);
    if (radius <= 0)
    {
      printf("\nATENCAO!! O a ser informado deve ser maior que zero\n");
    }
  } while (radius <= 0);
  
  area = 3.14 * (radius * radius);
  printf(" => A area do circulo e de: %f metros quadrados\n\n", area);
}

void calculateRetangleArea()
{
  float area, height, width;
  do
  {
    printf("Por favor, digite a ALTURA do retangulo em metros:\n => ");
    scanf("%f", &height);
    if (height <= 0)
    {
      printf("\nATENCAO!! O a ser informado deve ser maior que zero\n");
    }
  } while (height <= 0);
  
  do
  {
    printf("Por favor, digite a LARGURA do retangulo em metros:\n => ");
    scanf("%f", &width);
    if (width <= 0)
    {
      printf("\nATENCAO!! O a ser informado deve ser maior que zero\n");
    }
  } while (width <= 0);
  
  area = height * width;
  printf(" => A area do retangulo e de: %f metros quadrados\n\n", area);
}

void calculateSphereVolume()
{
  float volume, radius;
  do
  {
    printf("Por favor, digite o tamanho do RAIO da esfera em metros:\n => ");
    scanf("%f", &radius);
    if (radius <= 0)
    {
      printf("\nATENCAO!! O a ser informado deve ser maior que zero\n");
    }
  } while (radius <= 0);
  
  volume = (4 * 3.14 * (radius * radius * radius)) / 3;
  printf(" => O volume da esfera e de: %f metros cubicos\n\n", volume);
}

void calculateParallelepipedVolume()
{
  float volume, length, height, width;
  do
  {
    printf("Por favor, digite o COMPRIMENTO do paralelepipedo em metros:\n => ");
    scanf("%f", &length);
    if (length <= 0)
    {
      printf("\nATENCAO!! O a ser informado deve ser maior que zero\n");
    }
  } while (length <= 0);
  
  do
  {
    printf("Por favor, digite a ALTURA do paralelepipedo em metros:\n => ");
    scanf("%f", &height);
    if (height <= 0)
    {
      printf("\nATENCAO!! O a ser informado deve ser maior que zero\n");
    }
  } while (height <= 0);
  
  do
  {
    printf("Por favor, digite a LARGURA do retangulo em metros:\n => ");
    scanf("%f", &width);
    if (width <= 0)
    {
      printf("\nATENCAO!! O a ser informado deve ser maior que zero\n");
    }
    
  } while (width <= 0);

  volume = length * height * width;
  printf(" => O volume do paralelepipedo e de: %f metros cubicos\n\n", volume);
}

int main()
{
  int option;
  do
  {
    showMenu();
    scanf("%d", &option);

    switch (option)
    {
    case 1:
      printf("\nOpcao escolhida: Calculo da area do circulo\n\n");
      calculateCircleArea();
      break;
    case 2:
      printf("\nOpcao escolhida: Calculo da area do retangulo\n\n");
      calculateRetangleArea();
      break;
    case 3:
      printf("\nOpcao escolhida: Calculo do volume da esfera\n\n");
      calculateSphereVolume();
      break;
    case 4:
      printf("\nOpcao escolhida: Calculo do volume do paralelepipedo retangulo\n\n");
      calculateParallelepipedVolume();
      break;

    default:
      if (option != 5) {
        printf("\nATENCAO!! Opcao Invalida!\n");
      } else {
        printf("\n\nFim do Programa\n\n");
      }
      break;
    }

  } while (option != 5);

  return 0;
}