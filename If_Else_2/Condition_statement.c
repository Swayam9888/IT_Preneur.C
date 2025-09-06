#include<stdio.h>
int main(){
  int no1;
  printf("Enter the first number:=");
  scanf("%d",&no1);
   
  if (no1 % 3 ==0){
    printf("C");
  } else if (no1 % 5 == 0){
    printf("Language");
  } else if (no1 % 3 ==0 && no1 % 5 ==0){
  printf("C and Language");
  }else{
    printf("%d is not divisible by 3 and 5",no1);
  }
  return 0;
  
}