#include<stdio.h>
int main(){
  int i,limit,sum_even=0,sum_odd=0;

  printf("Enter the value\n");
  scanf("%d",&limit);


  for ( i= 0; i<=limit; i+=2)
  {
   sum_even=sum_even+i;
   printf("The total sum of even is:%d\n ",sum_even);
  }
  
  for ( i= 1; i<=limit; i+=2)
  {
   sum_odd=sum_odd+i;
   printf("The total sum odd is:%d\n ",sum_odd);
  }
  

  return 0;
}