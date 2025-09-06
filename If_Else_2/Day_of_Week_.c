#include<stdio.h>
int main(){
  int dayNo;
 printf("Enter the number from 1 to 7\n");
 scanf("%d",&dayNo);

 if (dayNo >= 1 && dayNo<=7) {
  if(dayNo == 1){
    printf("Its A Monday");
  }else if(dayNo == 2 ){
  
    printf("Its A Tuesday ");
  }else if(dayNo == 3 ){
    printf("Its A Wednesday");
  }else if(dayNo == 4){
    printf("Its A Thursday");
  }else if(dayNo == 5){
    printf("Its A Friday");
  }else if(dayNo == 6){
    printf("Its A Saturday ");
  }else if(dayNo == 7){
    printf("Its A Sunday ");
  }

 }else {
  printf("Day Number is invalid",dayNo);
 }
 
  return 0;
}