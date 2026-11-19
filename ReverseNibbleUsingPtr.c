/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdint.h>

int main()
{
    int a = 0x12345678;
    uint8_t *b = (uint8_t*)&a;
    
    for(int i=0;i<4;i++)
    {
        int t = *(b+i);
        int t1 = t & 0x0F;
        int t2 = t & 0xF0;
        t = 0;
        t|= (t1 << 4);
        t|= (t2 >> 4);
        *(b+i) = t;
    }
    
    uint8_t t = *b;
    *b = *(b+3);
    *(b+3) = t;
    
    t = *(b+1);
    *(b+1) = *(b+2);
    *(b+2) = t;
    
    printf("%x",a);
    
    return 0;
}
