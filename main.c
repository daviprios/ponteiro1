#include <stdio.h>
#include <stdlib.h>

int main()
{
    int integer = 10, *pInteger = &integer;
    char character = 'a', *pCharacter = &character;
    float real = 2.5f, *pReal = &real;
    printf("Integer: %d\nCharacter: %c\nReal: %f\n\n", integer, character, real);
    *pInteger = 20;
    *pCharacter = 'b';
    *pReal = 7.5f;
    printf("Integer: %d\nCharacter: %c\nReal: %f\n", integer, character, real);
    return 0;
}
