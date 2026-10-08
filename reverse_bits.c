/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdint.h>

void bitswap(uint32_t *x)
{
    // Extract odd places digits
    
    uint32_t xodd = *x & 0x55555555;
    uint32_t xeven = *x & 0xaaaaaaaa;
    
    xodd <<=1;
    xeven >>=1;
    *x = xodd | xeven;
    
    // printf("bit swap %0x", *x); // 0xED5EC0ED
}
 
 // 00110011 // 1100,1100 bb

void bit2swap(uint32_t *x)
{
    // Extract odd places digits
    
    uint32_t xodd = *x & 0x33333333;
    uint32_t xeven = *x & 0xcccccccc;
    
    xodd <<=2;
    xeven >>=2;
    *x = xodd | xeven;
    
    // printf("bit swap %0x", *x); // 0xED5EC0ED
}

void nibbleswap(uint32_t *x)
{
    
    uint32_t xoddnibble = *x & 0x0f0f0f0f;
    uint32_t xevennibble = *x & 0xf0f0f0f0;
     xoddnibble <<=4;
    xevennibble >>=4;
    *x = xoddnibble | xevennibble;
}

void byteswap(uint32_t *x)
{
    
    uint32_t xoddbyte = *x & 0x00ff00ff;
    uint32_t xevenbyte = *x & 0xff00ff00;
     xoddbyte <<=8;
    xevenbyte >>=8;
    *x = xoddbyte | xevenbyte;
}

void int16_swap(uint32_t *x)
{
     uint32_t xoddbyte = *x & 0x0000ffff;
    uint32_t xevenbyte = *x & 0xffff0000;
     xoddbyte <<=16;
    xevenbyte >>=16;
    *x = xoddbyte | xevenbyte;
}

int main()
{
   uint32_t x = 0xdeadc0de;  // 0x7b03b57b
   
   int y=0;
   
   
   // First method
//   for(int i=0;i<32;i++)
//   {
//       int a = ((x>>i) & 1);
//       y<<=1;
//       y |=a;
//   }


// Secind methid
    bitswap(&x);
    bit2swap(&x);
    nibbleswap(&x);
    byteswap(&x);
    int16_swap(&x);
    
   
  printf("Reversed number %0x", x);
   return 0;
}
