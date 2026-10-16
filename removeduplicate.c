#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    
    return;
}
int main(void)
{
    int arr[] = {1, 2, 2, 3, 1, 4};
    int i=0,j=0;
    int n=6;
    int num=0;
    
    for(int i=0;i<n;i++)
    {
        if(!(num & (1 << arr[i])))
        {
          num |= 1<<arr[i];
          swap(&arr[j],&arr[i]);
          j++;
        }
    }
    
    for(int i=0;i<j;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
