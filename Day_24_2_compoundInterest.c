#include <stdio.h>
  
#include<math.h> 
  
int main() 
{
  double principal = 18000; 
  
  double rate = 56; 
  
  double time = 74; 
  
  double Amount = principal * ((pow((1 + rate / 100),  time)));
  double CI = Amount - principal;
   
  printf("Compound Interest is : %lf",CI);
  return 0;
}
