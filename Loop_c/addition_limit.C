#include<stdio.h>
int main(){

  int limit,i,sum=0;

  printf("Enter the limit");
  scanf("%d",&limit);

  for ( i = 1; i <= limit; i++)
  {
    sum=sum+i;
    printf("The addition till limit is :=%d \n",sum);
  }
  

  return 0;
}