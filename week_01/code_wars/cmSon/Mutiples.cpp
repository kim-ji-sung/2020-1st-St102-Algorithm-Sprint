#include <iostream>

int Mutiples(int number) 
{
  int sum = 0;
  
  if (number <= 0) return 0;
  
  for ( int i = 1; i < number; i++){
    if (i % 3 == 0) sum += i;
    else if (i % 5 == 0) sum += i;  
  }
  
  return sum;
}

