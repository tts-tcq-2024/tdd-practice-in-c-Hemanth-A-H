#ifndef STRINGCALCULATOR_H
#define STRINGCALCULATOR_H

#include <stdio.h>
#include <stdlib.h>

int check_input_zero(int num1, int num2)
{
  if((num1 == 0) && (num2 == 0))
  {
    return 0;
  }
  return 1;  
}

int add(const char *input)
{
  int sum = 0;
  int num1,num2;
  sscanf(input, "%d,%d", &num1,&num2);
  if(check_input_zero(num1,num2))
  {
    sum = num1+num2;
  } 
  return sum;
}

#endif 
