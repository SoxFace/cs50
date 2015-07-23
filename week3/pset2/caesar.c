#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// referenced korenic.com

int main(int argc, string argv[])
{
    // initialize key
    int key;
    int result;
    
    // incorrect input
    if (argc != 2)
    {
        printf("You didn't enter a key.\n");
        return 1;
    }
    // get the plaintext
    string PlainText = GetString();
    
    // convert string number to integer
    key = atoi(argv[1]);
    
    if (key >= 26)
    {
        key = (key % 26);
    }
    
    // encryption
    
    for (int i = 0, n = strlen(PlainText); i < n; i++)
    {
        result = (PlainText[i] + key);
        
        if (isupper(PlainText[i]) && (result > 'Z'))
        {
            result = (result - 26);
        }
        
        if (islower(PlainText[i]) && (result > 'z'))
        {
            result = (result - 26);
        }
        
        if (isalpha(PlainText[i]))
        {
            printf("%c", result);
        }
        else
        {
            printf("%c", PlainText[i]);
        }
     
    }
    
    printf("\n");
    return 0;
}
