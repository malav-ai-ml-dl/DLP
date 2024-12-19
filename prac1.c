#include <stdio.h>
#include <string.h>
                                                              
int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[i] == 'a') 
    {
        i++;
    }

    if (str[i] == 'b' && str[i + 1] == 'b' && str[i + 2] == '\0') 
    {
        printf("Valid string.\n");
    } 
    else 
    {
        printf("Invalid string.\n");
    }

    return 0;
}
