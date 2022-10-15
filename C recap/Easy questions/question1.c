#include<stdio.h>

int main()
{
    //check if a chartacter is a vowel or consonant;

    char a;
    scanf("%c", &a);

    if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
    {
        printf("%c is a vowel.", a);
    }

    else
    {
        printf("%c is a consonant.", a);
    }

    return 0;
}

