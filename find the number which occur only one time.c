
*******************************************************************************/

// Find the number that occur single time in array;


#include <stdio.h>

int main()
{
    int arr[11] = {10,10,12,12,14,14,15,16,16,22,22};
    int ans = arr[0];
    for(int i=1;i<11;i++)
    {
        ans = ans ^ arr[i];
    }
    
    printf("%d",ans);
    
    return 0;
}
