/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float mark1,mark2,average;
   printf("Enter your mark 1 : ");
   scanf("%f",&mark1);
   printf("Enter your mark 2 : ");
   scanf("%f",&mark2);
   printf("Average : %.2f",(mark1+mark2)/2);
  return 0;
}

