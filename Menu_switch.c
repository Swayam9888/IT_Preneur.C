#include <stdio.h>
int main()
{
  int menu_No;
  char VegOrnon_Veg,juiceandcoldDrinks;
  printf("Enter 1 to choose Pizza\n");
  printf("Enter 2 to choose Burger\n");
  printf("Enter 3 to choose Cold drink\n");
  scanf("%d", &menu_No);

  (menu_No >= 1 && menu_No <= 3) ? printf("Valid number\n") : printf("Invalid No\n");
  switch (menu_No)
  {
  case 1 :printf("Enter V for Veg Pizza and N for Nonveg Pizza ");
    getchar();
    scanf("%c", &VegOrnon_Veg);
    
    if (VegOrnon_Veg == 'V' || VegOrnon_Veg == 'v')
    {
      printf("show pizza options:\n 1_Magreta\n 2_Perry perri\n 3_Corn\n");
      printf("Which  Pizza You Want choose option from 1,2 and 3 \n");
      scanf("%d",&menu_No);
      if(menu_No==1){
        printf("Its Magreta Pizza");
      }else if(menu_No==2){
        printf("Its a Perry perri Pizza");
      }else if(menu_No==3){
        printf("Its a Corn Pizza");
      }
    }else if (VegOrnon_Veg == 'N' || VegOrnon_Veg == 'n')
    {
      printf("show Non_veg pizza options:\n 1_Chiken Pizza\n 2_Mutton Pizza\n 3_Chiken Cheese Pizza\n");
      printf("Which  Pizza You Want choose option from 1,2 and 3 \n");
      scanf("%d",&menu_No);
      if(menu_No==1){
        printf("Its Chiken Pizza");
      }else if(menu_No==2){
        printf("Its a Mutton Pizza");
      }else if(menu_No==3){
        printf("Its a Chiken Cheese Pizza");
      }
    }
    break;
    case 2 : printf("Enter V for Veg Burger and N for Nonveg Burger ");
    getchar();
    scanf("%c", &VegOrnon_Veg);
    if (VegOrnon_Veg == 'V' || VegOrnon_Veg == 'v')
    {
      printf("show Burger options:\n 1_Aaloo Tiki\n 2_Double Cheese\n 3_Corn Burger\n");
      printf("Which Burger You Want choose option from 1,2 and 3 \n");
      scanf("%d",&menu_No);
      if(menu_No==1){
        printf("Its Aaloo Tiki");
      }else if(menu_No==2){
        printf("Its a Double Cheese Burger");
      }else if(menu_No==3){
        printf("Its a Corn Burger");
      }
    }
    else if (VegOrnon_Veg == 'N' || VegOrnon_Veg == 'n')
    {
      printf("show Non_veg Burger options:\n 1_Chiken Burger\n 2_Cheese Chiken Burger\n 3_Corn Chiken Burger\n");
      printf("Which Burger You Want choose option from 1,2 and 3 \n");
      scanf("%d",&menu_No);
      if(menu_No==1){
        printf("Its Chiken Burger");
      }else if(menu_No==2){
        printf("Its a Cheese Chiken Burger");
      }else if(menu_No==3){
        printf("Its a Corn Chiken Burger");
      }
      break;
    case 3 : printf("Enter J forJuice and C for Cold Drinks ");
    getchar();
    scanf("%c", &juiceandcoldDrinks);
    if (juiceandcoldDrinks == 'C' || juiceandcoldDrinks == 'c')
    {
      printf("show Soft Drink  options:\n 1_Mirinda\n 2_Sprite\n 3_Coke\n");
      printf("Which Soft Drink You Want choose option from 1,2 and 3 \n");
      scanf("%d",&menu_No);
      if(menu_No==1){
        printf("Its Mirinda Soft Drink");
      }else if(menu_No==2){
        printf("Its a Sprite Soft Drink");
      }else if(menu_No==3){
        printf("Its a Coke Soft Drink");
      }
    }
    else if (juiceandcoldDrinks == 'J' || juiceandcoldDrinks == 'j')
    {
      printf("show Juice Drink options:\n 1_Mango Juice\n 2_Pineapple Juice\n 3_Apple Juice\n\n");
      printf("Which Juice You Want choose option from 1,2 and 3 \n");
      scanf("%d",&menu_No);
      if(menu_No==1){
        printf("Its Mango Juice");
      }else if(menu_No==2){
        printf("Its a Pineapple Juice");
      }else if(menu_No==3){
        printf("Its a Apple Juice");
      }
    }
  }

}
 return 0;
  
}