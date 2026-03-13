/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a=66;
    int b=45;
    
    
    int c=0,i=0,sum=0;
    while(a||b||c)
    {
        int aa=a&1;
        int bb=b&1;
        
        int temp = (aa^bb)^c;
        sum |= temp << i++;
        c = (a&b) | (a&c) | (c&b);
        a = a>>1;
        b = b>>1;
        
        
    }
    
    printf("%d",sum);

    return 0;
}
