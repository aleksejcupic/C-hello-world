#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Get user's name
    char name[20];
    printf("Enter your name: ");
    scanf("%s", name);
   // fgets(name, 20, stdin);

    // Print message
    printf("Hello, %s\n", name);
    
    return 0;
}