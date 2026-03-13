/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void my_memcpy(void *src,void *des, size_t s)
{
    int* tempsrc = (int*)src;
    int* tempdes = (int*)des;
    
    for(size_t i=0;i<s;i++)
    {
        tempdes[i] = tempsrc[i];
    }
    // for(size_t i=0;i<s;i++)
    // {
    //     tempdes[i] 
    // }
    
    
    
}

int main()
{
    // int src[10] = {1,2,3,4,5,6,7,8,9,10};
    
    // int des[10];
    
    char* src = "Ashutosh";
    char* des;
    
    my_memcpy(src,des,sizeof(src));
    
    // for(int i=0;i<10;i++){
    //     printf("%d\n",des[i]);
    // }
    
    printf("%s",des);
    

    return 0;
}
