#include <cs50.h>
#include <stdio.h>

int main()
{
    printf("%d\n", 'a' - 'A');
    printf("%c\n", 'B' + ('a' - 'A'));
    printf("%c\n", 'b' - ('a' - 'A'));
    printf("%c\n", 'B' + 1);
    printf("%c\n", ('z' - 'a' + 1) %26 + 'a');
}
