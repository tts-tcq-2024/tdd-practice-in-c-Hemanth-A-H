#ifndef STRINGCALCULATOR_H
#define STRINGCALCULATOR_H

#include <stdio.h>
#include <stdlib.h>

void find_the_sum(int *num1,int *num2,int *num3,int **sum)
{
  **sum = *num1 + *num2 + *num3;
}

void find_num_greater_than_100(int *num1,int *num2,int *num3)
{
 if(*num1 > 1000)
  *num1 = 0;
 if(*num2 > 1000)
  *num2 = 0;
 if(*num3 > 1000)
  *num3 = 0;
}

void process_input(const char *input, int *sum)
{
  int num1 = 0;
  int num2 = 0;
  int num3 = 0;
  int input_len = strlen(input);
  if(input_len <= 3)
  {
    sscanf(input, "%d,%d", &num1,&num2);
  }
  else
  {
    sscanf(input, "%d\n%d,%d", &num1,&num2,&num3);
  }

  find_num_greater_than_100(&num1,&num2,&num3);
  find_the_sum(&num1,&num2,&num3,&sum);
  
}


int add(const char *input)
{
  int sum = 0;
  process_input(input,&sum);
  return sum;
}

#endif 
