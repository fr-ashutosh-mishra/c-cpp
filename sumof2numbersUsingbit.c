/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a = 10;
    int b = 1;
    int sum=0;
    int carry = 0;
    int i=0;
    while(a||b||carry)
    {
        int aa = a&1;
        int bb = b&1;
        
        int temp = aa^bb^carry;
                
        temp = temp << i++;
        sum|=temp;
        
        carry = (aa&bb) | (bb&carry) | (carry&aa);
        a = a>>1;
        b = b>>1;
       
    }

printf("%d",sum);
    return 0;
}
