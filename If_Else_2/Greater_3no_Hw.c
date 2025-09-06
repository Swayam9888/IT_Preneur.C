#include<stdio.h>
int main(){
  int no_1,no_2,no_3;
  printf("Enter the first value:=" );
  scanf("%d",&no_1);

   printf("Enter the second value:=");
  scanf("%d",&no_2);
   printf("Enter the third value:=");
  scanf("%d",&no_3);
  if (no_1 > no_2 && no_1> no_3){
    printf("First value is greater then %d and %d",no_2,no_3);
  }else if (no_2 > no_1 && no_2> no_3){
    printf("Second value is greater then %d and %d",no_1,no_3);
  }else {
    printf("Third value is greater then %d and %d",no_1,no_2);
  }
  return 0;
  
}