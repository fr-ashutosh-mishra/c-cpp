// Online C compiler to run C program online
#include <stdio.h>

void count_the_char(const char* str)
{
    if(str==NULL)
        return;

    int count[256] ={ 0};

    while(*str!='\0')
        {
            count[*str]++;
            str++;
        }
    for(int i=0;i<256;i++)
        {
            if(count[i]>0)
            {
                printf("char = %c, count = %d\n",i,count[i]);
            }
        }
}

int main() {

    const char *str = "HelloWorld";
    count_the_char(str);
    
    return 0;
}
