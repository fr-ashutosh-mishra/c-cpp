// Power of 4

#include <stdio.h>

int main()
{
    int n = 32;
    
    if(((n&n-1)==0) && (n&(0x55555555)))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}
