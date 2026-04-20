/*
* Wap a program using bitmap, how many bit will flip to get the expected value from input value.
*/

#include <stdio.h>

int main()
{
    // int a = 10; // 01010
    // int e = 18; // 10010
     
    int a= 70; // 1000110
    int e = 1; // 0000001
     
   // logic
   
   int sum = a^e;
   int count = 0;
   while(sum)
   {
       sum = (sum&(sum-1));
       count++;
   }
   
   printf("%d",count);
}
