#include<stdio.h>
int main (){
  int no_1,no_2;
  printf("\n Give the two numbers to compare:=" );
  scanf("%d%d",&no_1,&no_2);
  if(no_1 > no_2){
    printf(" %d is greater\n",no_1);
  }else if (no_1 == no_2){
    printf("%d and %d both are equal number",no_1,no_2);
  }else{
    printf("%d is greater\n",no_2);
  }
  return 0;
}
