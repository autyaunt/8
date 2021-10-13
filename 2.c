#include <stdio.h>  
int main()
{
    char str[1000];
    int countX = 0;
    int countx = 0;
    int i=0;
    printf("Enter string : ");
    gets(str);
    while(str[i] != 0)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            countX++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            countx++;
        }
        i++;
    }
    printf("Uppercase = %d\n", countX);    
    printf("Lowercase = %d", countx);        
    return 0;
}
