#include<stdio.h>

int main()
{
    int a = 0xd5;

    //reverse nibble

    // int temp = a & 0x0f;
    // int temp2 = a & 0xf0;
    // a = temp << 4 | temp2 >> 4;

    //reverse whole bytes
    int size = sizeof(a);

    size = size * 8;
    int res=0,i=0;
    size = 8;
    // printf("%d",size);
    while(a)
    {
        int temp = a&1;
        res = res << 1;
        res |= temp;
        
        a = a >> 1; 
    }

    printf("%x",res);



}