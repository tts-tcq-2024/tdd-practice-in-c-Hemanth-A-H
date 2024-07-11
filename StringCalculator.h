#ifndef STRINGCALCULATOR_H
#define STRINGCALCULATOR_H

#include <stdio.h>
#include <stdlib.h>

int delimiter_flag = 0;
int temp = 0;

void checkforgreater_than1000(int *temp)
{
  if(*temp > 1000)
  {
    *temp = 0;
  }  
}

void checkfordigits(char num_char,int *sum)
{
  if(isdigit(num_char) && (delimiter_flag == 0))
  {
    temp = temp * 10 + (num_char - '0');
    checkforgreater_than1000(&temp);    
  }
  else
  {
    delimiter_flag = 1;
    *sum = *sum + temp;
    temp = 0;      
  }
}


void process_input(const char *input, int *sum)
{
  int i = 0;
  int input_len = strlen(input);
  while(i<input_len)
  {
    checkfordigits(input[i],sum);
    i++;
    if(delimiter_flag == 1)
    {
        delimiter_flag = 0;
    }
  }
  *sum = *sum + temp;  
}


int add(const char *input)
{
  int sum = 0;
  process_input(input,&sum);
  return sum;
}

#endif 
