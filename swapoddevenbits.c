/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{

  int a = 11;
  
//   extract even bits
  int temp = a & 0xAA;
//   extract odd
  int temp2 = a & 0x55;
  
  int res = (temp >> 1) | (temp2 << 1);
  
  printf("%d",res);
  
    return 0;
}
