#include <stdio.h>
int main()
{
  int age, num, choice;
  printf("----------------Menu------------------");
  printf("\n 1 : Age Validation");
  printf("\n 2 : Divisible by 3 and 5\n");

  printf("Enter the choice\n");
  scanf("%d", &choice);

  switch (choice)
  {
  case 1:
    printf("Enter the age:");
    scanf("%d", &age);
    if (age > 18)
    {
      printf("\nValid for Vote....");
    }
    else
    {
      printf("Invalid for Vote\n");
    }
    break;

  case 2:
    printf("Enter the number");
    scanf("%d", num);
    if (num % 3 == 0 && num % 5 == 0)
    {
      printf("The number is divisible by 3 and 5");
    }
    else if (num % 3 == 0)
    {
      printf("Number is divisile by 3");
    }
    else if (num % 5 == 0)
    {
      printf("Number is dividible by 5");
    }
    else
    {
      printf("Number is not divisible by 3 and 5");
    }
    break;

  default:
    printf("Invalid Choice...\n");
    break;
  }

  return 0;
}