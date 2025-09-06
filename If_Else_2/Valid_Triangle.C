#include<stdio.h>
int main(){


  int Angle_A,Angle_B,Angle_C;
  printf("Enter the Values to check whether triangle is valid or not:=\t");
  scanf("%d\t%d\t%d",&Angle_A,&Angle_B,&Angle_C);

  if(Angle_A+Angle_B+Angle_C == 180){
    printf("Its a Triangle",Angle_A,Angle_B,Angle_C);
  }else{
    printf("Its not a Triangle");
  }


  return 0;
}