/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>


char* sstrcpy(char *d, char *s)
{
    char* saved = d;
    while(*s!='\0')
    {
        *d++ = *s++;
    }
    
    *d++ = '\0';
    
    return saved;
}

int main()
{
    
    char *s = "Ashutosh Mishra";
    char *d;
    
    // char *r = strcpy(d,s);
    
    char *r = sstrcpy(d,s);
    
    printf("%s",r);
    
    
    

    
    
   
    
    
   
    
    
    return 0;
}
