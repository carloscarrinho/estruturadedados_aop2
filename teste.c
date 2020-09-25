// #include <stdio.h>
// int main()
// {
//   int n, r, sum = 0, temp;
//   printf("enter the number=");
//   scanf("%d", &n);
//   temp = n;
//   while (n > 0)
//   {
//     r = n % 10;
//     sum = (sum * 10) + r;
//     n = n / 10;
//   }
//   if (temp == sum)
//     printf("palindrome number ");
//   else
//     printf("not palindrome");
//   return 0;
// }

#include <stdio.h>
int main()
{
  int n, reversedN = 0, remainder, originalN;
  printf("Enter an integer: ");
  scanf("%d", &n);
  originalN = n;

  // reversed integer is stored in reversedN
  while (n != 0)
  {
    remainder = n % 10;
    reversedN = reversedN * 10 + remainder;
    n /= 10;
  }

  // palindrome if orignalN and reversedN are equal
  if (originalN == reversedN)
    printf("%d is a palindrome.", originalN);
  else
    printf("%d is not a palindrome.", originalN);

  return 0;
}