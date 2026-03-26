/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
//   reverse bytes

//  0x34 56 78 9A  -> 9A 78 56 34
 
 int a = 0x3456789A;
 
 int temp1 = a & 0x000000ff;
 int temp2 = a & 0x0000ff00;
 
 int temp3 = a & 0x00ff0000;
 int temp4 = a & 0xff000000;
 
 temp1 = temp1 << 24;
 temp2 = temp2 <<8;
 temp3 = temp3 >> 8;
 temp4 = temp4 >> 24;
 
 
 
 
 int ans = temp4 | temp3 | temp2|temp1;
 
//  printf("%x\n",temp1);
//  printf("%x\n",temp2);
//  printf("%x\n",temp3);
//  printf("%x\n",temp4);
 printf("%x",ans);
 
 




}
