#include <stdio.h>
#include <string.h>
int countWords(char *str)
{
    int count = 0;
    int isWord = 0; 
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        {
            isWord = 0; 
        }
        else if (!isWord)
        {
            isWord = 1; 
            count++;    
        }
    }

    return count;
}

int main()
{
    char inputString[1000];
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);
    if (inputString[strlen(inputString) - 1] == '\n')
    {
        inputString[strlen(inputString) - 1] = '\0';
    }
    int wordCount = countWords(inputString);
    printf("Number of words in the string: %d\n", wordCount);

    return 0;
}
