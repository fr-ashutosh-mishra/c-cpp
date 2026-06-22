#include<stdio.h>
#include<stdlib.h>

void* mymemset(void* ptr, char n, size_t t)
{
    int* dstt = (int*)ptr;
    
    while(t--)
    {
        *dstt++ =   n;
    }
    
    return ptr;
}

int main()
{
    int arr[10];
    
    mymemset(arr,'A',sizeof(arr));
    
    
    for(int i=0;i<sizeof(arr)/sizeof(arr[i]);i++)
    {
        printf("%d\n",arr[i]);
    }
}
