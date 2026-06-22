#include<stdio.h>

void* mymemcpy(void* des, void* src, size_t n)
{
    unsigned char* dess = (unsigned char*)des;
    unsigned char* srcc = (unsigned char*)src;
    
    for(size_t i=0;i<n;i++)
    {
        dess[i] = srcc[i];
    }
}

int main()
{
    int des[10] = {10,11,12,1,3,4,5,6,7,8};
    
    int src[10] = {10,10,10,10,10,10,10,10,10,10};
      
    mymemcpy(des,src,sizeof(des));
    
    for(int i=0;i<10;i++)
    {
    printf("%d\n", des[i]);
        
    }
    
    
    
}
