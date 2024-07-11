#ifndef STRINGCALCULATOR_H
#define STRINGCALCULATOR_H

#include <stdio.h>
#include <stdlib.h>

void find_the_sum(int *num1,int *num2,int *num3,int **sum)
{
  **sum = *num1 + *num2 + *num3;
}

void process_input(const char *input, int *sum)
{
  int num1 = 0;
  int num2 = 0;
  int num3 = 0;
  int input_len = strlen(input);
  if(input_len <= 4) // this handles the num > 1000
  {
    sscanf(input, "%d,%d", &num1,&num2);
  }
  else
  {
    sscanf(input, "%d\n%d,%d", &num1,&num2,&num3);
  }
  find_the_sum(&num1,&num2,&num3,&sum);
  
}


int add(const char *input)
{
  int sum = 0;
  process_input(input,&sum);
  return sum;
}

#endif 
