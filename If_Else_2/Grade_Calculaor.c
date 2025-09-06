#include <stdio.h>
int main()
{

  int marks;

  printf("Enters the marks obtained by user");
  scanf("%d", &marks);

  if (marks > 0 && marks < 100)
  {

    if (marks > 90) 
    {
      printf("The student got A grade :\t", marks);
    }
    else if (marks > 80 && marks < 89)
    {
      printf("The student got B grade :\t", marks);
    }
    else if (marks > 60 && marks < 79)
    {
      printf("The student got C grade :\t", marks);
    }
    else if (marks > 50 && marks < 69)
    {
      printf("The student got D grade :\t", marks);
    }
    else if (marks > 36 && marks < 59)
    {
      printf("The student got E grade :\t", marks);
    }
    else if (marks > 0 && marks < 35)
    {
      printf("The student got F grade :\t", marks);
    }
  }
  else
  {
    printf("Marks are invalid");
  }

  return 0;
}