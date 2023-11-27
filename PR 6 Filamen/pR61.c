#include <stdio.h>
#include <string.h>
int main()
{

    char a[20];
    char b[20];
    printf("enter the string: ");

    gets(a);
    strcpy(b,a);
    strrev(b);
    if (strcmp(a,b)==0)
    {
      printf("given string is palindrome");  
    }
    else
    {
        printf("given string is not palindrome");
    }
    
    
   
    return 0;
}