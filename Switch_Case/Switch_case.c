#include<stdio.h>
int main(){
  int a,b,res,choise;
  printf("Menu\n");
  printf("1.Addition\n2.Subtraction\n3.Division\n4.Multiplication\n");
  printf("Enter th choise fron 1-4\n");
  scanf("%d",&choise);
  printf("Enter 2 numbers\n");
  scanf("%d%d",&a,&b);
  switch (choise)
  {
  case 1:res=a+b;
    break;
  case 2:res=a-b;
    break;
  case 3:res=a/b;
    break;
  case 4:res=a*b;
    break;
  
  default:printf("Chooose number is invalid");
    break;
  }
  printf("The answer is :""%d",res);

  return 0;
}