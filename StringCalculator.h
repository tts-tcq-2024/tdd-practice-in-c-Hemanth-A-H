#ifndef STRINGCALCULATOR_H
#define STRINGCALCULATOR_H

#include <stdio.h>
#include <stdlib.h>


void process_input(const char *input, int *sum)
{
  int num1 = 0;
  int num2 = 0;
  int num3 = 0;
  int i = 0;
  int input_len = strlen(input);
  while(i<input_len)
  {
      if(isdigit(input[i]))
      {
          *sum = *sum + atoi(input[i]);
      }
    i++;
  }  
}


int add(const char *input)
{
  int sum = 0;
  process_input(input,&sum);
  return sum;
}

#endif 
