#include <stdio.h>
int main()
{
    int sellingPrice, actualPrice, profit, loss, side,choice,lth,brth;
  float radius;
  printf("1_To perform Area of circle\n");
  printf("2_To perform Area of Rectangle\n");
  printf("3_To perform Area of Square\n");
  printf("4_To perform Profit and Loss\n");
  scanf("%d", &choice);
  switch (choice)
  {
  case 1:
    
    printf("Enter the radius CM ");
    scanf("%f", &radius);
    printf("\n The Area if the circle is : = %f", 3.14 * radius * radius);

    break;
  case 2:
    
    printf("Enter the length and breath in CM ");
    scanf("%d%d", &lth, &brth);
    printf("\n The Area if the Rectangle is : = %d", lth * brth);
    break;
  case 3:
  
    printf("Enter the Side in CM ");
    scanf("%d", &side);
    printf("\n The Area if the Square is : = %d", side * side);
    break;
  case 4:
   
 
    
      printf("\n Enter the Actual Price of the Product : = ");
      scanf("%d", &actualPrice);
      printf("\n Enter the Selling Price of the Product : = ");
      scanf("%d", &sellingPrice);
      // if else ladder
      if (sellingPrice > actualPrice)
      {
        profit = sellingPrice - actualPrice;
        printf("\n The Profit is : = %d ", profit);
      }
      else if (sellingPrice == actualPrice)
      {
        printf("\n Equal Margin ..! ");
      }
      else
      {
        loss = actualPrice - sellingPrice;
        printf("\n The Loss is : = %d ", loss);
      }
    
  }
  return 0;
}