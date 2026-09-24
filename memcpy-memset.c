/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void mmcpy(void *d, const void *a, int s)
{
    char *des = (char*)d;
    char *src = (char*)a;
    for(int i=0;i<s;i++)
    {
        *(des)++ = *(src)++;
    }
}

void mset(void* d, char value, int s)
{
    char* des = (char*)d;
    
    for(int i=0;i<s;i++)
    {
        *des = value;
        des++;
    }
}

int main()
{
    int a[10] = {10,11,12,13,14,15,16,17,18,19};
    int b[10] = {0};
    
    // mmcpy(b,a,sizeof(a));
    mset(b,0x15,sizeof(b));
    
    
    for(int i=0;i<10;i++)
    {
        printf("%0x\n",b[i]);
    }
    
    
   
    
    
    return 0;
}
