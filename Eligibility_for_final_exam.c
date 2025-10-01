/*
Name:Sombe Jacinta Nduku
Reg.no:CT100/G/26233/25
Description:program to check students eligibility for final exams
*/
#include<stdio.h>

int main(){
  float attendance,average_marks;
  printf("Enter your attendance percentage:\n");
  scanf("%f",&attendance);
  
  printf("Enter your average_marks:\n");
  scanf("%f",&average_marks);
  
  if(attendance>=75&average_marks>=40){
    printf("you are eligible for final exams\n");
  }
  else{
    printf("you are not eligible for final exams\n");
  }
  
  return 0;
}