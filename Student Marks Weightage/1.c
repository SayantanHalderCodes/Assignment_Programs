#include <stdio.h>
int main() 
{
  float e1,e2,s,a1,a2,a3,tm,p;
  printf("Enter marks for Examination 1 (out of 100): ");
  scanf("%f", &e1);
  printf("Enter marks for Examination 2 (out of 100): ");
  scanf("%f", &e2);
  printf("Enter marks for Sports (out of 100): ");
  scanf("%f", &s);
  printf("Enter marks for Activity 1 (out of 100): ");
  scanf("%f", &a1);
  printf("Enter marks for Activity 2 (out of 100): ");
  scanf("%f", &a2);
  printf("Enter marks for Activity 3 (out of 100): ");
  scanf("%f", &a3);
  tm = (e1+e2)*0.5+s*0.2+(a1+a2+a3)*0.3;
  p = tm / 3;
  printf("Total Marks: %f\n", tm);
  printf("Percentage: %f%%", p);
  return 0;
}
