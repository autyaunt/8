#include <stdio.h>  
int main()
{
    char str[1000];
    int countX = 0;
    int countx = 0;
    int i=0;
    printf("Enter Word : ");
    gets(str);
    for (i; str[i] != '\0'; i++)   
    {
        if (str[i] >= 'A' && str[i] <= 'Z') 
        {
            countX++;
        }
        if (str[i] >= 'a' && str[i] <= 'z')  
        {
            countx++;
        }
    }

    printf("Uppercase = %d\n", countX);    
    printf("Lowercase = %d", countx);        
    return 0;
}
