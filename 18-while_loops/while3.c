#include <stdio.h>
#include <string.h>

int main ()
{
    char name[50] = "";

    printf ("Please enter your name.\n");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0'; 
    
    while (strlen(name) == 0)
    {
        printf("you cannot enter a blank name. please enter your name\n");
        fgets(name, sizeof(name), stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("%s", name);
    
    return 0;
}