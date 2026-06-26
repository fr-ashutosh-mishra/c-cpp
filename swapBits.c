// Swap bits

#include <stdio.h>

int main()
{
    int a  = 31;
    
    int i = 1;
    int j = 3;
    
    if((a&1) != (a>>(j-1)&1))
    {
        a ^= 1;
        a ^= (1 << (j-1));
    }
    
    printf("%d", a);
    return 0;
}
