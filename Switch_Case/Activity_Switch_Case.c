#include <stdio.h>
int main()
{
  int a;
  char choice;

  printf("--------------Choose Choice------------------\n");
  printf("A_If you get 80 above to 100\n");
  printf("B_If you get 60 above to 80\n");
  printf("C_If you get 40 above to 60\n");
  printf("D_If you get 30 above to 40\n");
  printf("Print any key if marks below 30\n");

  printf("Enter the Choice:\t");
  scanf("%c", &choice);
  switch (choice)
  {
  case 'D':
  case 'd':
    printf("Enter the Percentage:\t");
    scanf("%d", &a);
    if (a >= 30 && a < 40)
    {
      printf("Choose Metallurgy or Printing");
    }
    else
    {
      printf("Not range of marks");
    }
    break;

  case 'C':
    printf("Enter the Percentage:\n");
    scanf("%d", &a);
    if (a >= 40 && a < 60)
    {
      printf("Choose Electrical or Electronis:\n");
    }
    else
    {
      printf("Not range of marks");
    }
    break;

  case 'B':
    printf("Enter the Percentage:\n");
    scanf("%d", &a);
    if (a >= 60 && a < 80)
    {
      printf("Choose Mechanical or Civil");
    }
    else
    {
      printf("Not range of marks");
    }
    break;
  case 'A':
    printf("Enter the Percentage:\t");
    scanf("%d", &a);
    if (a >= 80 && a <= 100)
    {
      printf("Choose CSE or related Branches");
    }
    else
    {
      printf("Not range of marks");
    }
    break;

  default:
    printf("Dont do B-Tech");
    break;
  }
  return 0;
}