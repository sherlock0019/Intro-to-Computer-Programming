#include<stdio.h>

int main()
{
    //A character is an alphabet or not
    char c;
    scanf("%c", &c);

    //finding the ascii value

    int ascii = c;

    // detecting if aphabet or no
    if(ascii >= 65 && ascii <= 90 || ascii >= 97 && ascii <= 122)
    {
        printf("yes");
    }

    else
    {
        printf("no");
    }

    return 0;
}