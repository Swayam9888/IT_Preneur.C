#include<stdio.h>
int main() {
  for (int i = 1; i <= 5; i++)
  {
    for (int j = 1; j <= 5; j++)
    {
      if (i<=j && i%2==1)
      {
        printf("%c ",64+i );
      }else if(i<=j && i%2==0){
        printf("%c ",48+i);
      }else{
        printf("_ ");
      }
      
    }
    printf("\n");
    
  }
  
  

  return 0;
}