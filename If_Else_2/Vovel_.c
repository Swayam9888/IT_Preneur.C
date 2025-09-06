#include <stdio.h>
int main()
{
  char Vowels;
  printf("Enter the Character to look is it vowels or not: ");
  scanf("%c", &Vowels);
  if (Vowels == 'A' || Vowels == 'E' || Vowels == 'I' || Vowels == 'O' || Vowels == 'U' || Vowels == 'e' || Vowels == 'a'|| Vowels == 'i' || Vowels == 'o' || Vowels == 'u')
  { 
    printf("%c:Its a Vowel", Vowels);
  }
  else
  {
    printf("Its not a Vowels\t");
  }

  return 0;
}