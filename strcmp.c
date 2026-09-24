/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char *s = "Hello world";
    char *p = "hello world";
    // int len=0;
    // while(*s != '\0')
    // {
    //     len++;
    //     s++;
    // }
    
    // printf("%d",len);
    
    
    while(*s && (*s == *p))
    {
        s++;
        p++;
    }
    
    printf("%d",*s-*p);
    
    
    return 0;
}
