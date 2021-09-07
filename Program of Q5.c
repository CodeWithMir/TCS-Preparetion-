/******************************************************************************

Q5.Problem Statement (Word is Key)
One programming language has the following keywords that cannot be used as identifiers:

break, case, continue, default, defer, else, for, func, goto, if, map, range, return, struct, type, var

Write a program to find if the given word is a keyword or not

Test cases
Case 1
Input – defer
Expected Output – defer is a keyword
Case 2
Input – While
Expected Output – while is not a keyword
''''''''''''''''''''''''WELCOME TO CODE WITH MIR'''''''''''''''''''''

*******************************************************************************/
#include <stdio.h>
#include <string.h>


int main()
{   
    printf("\n                             ''''''''''''''''''''''''WELCOME TO CODE WITH MIR'''''''''''''''''''''\n");
    int i=0;
    char str[16][20]={"break", "case", "continue", "default", "defer", "else", "for", "func", "goto", "if", "map", "range", "return", "struct", "type", "var"};
    
    char input[20];
    int flag =0;
    printf("\nInput – ");
    scanf("%s",input);
    
    for (i=0;i<16;i++)
        {
            if(strcmp(input,str[i]) == 0)
            {
                flag = 1;
                break;
            }
        }
    if (flag ==1){
            printf("Expected Output – %s is a keyword",input);
        }
    else{
            printf("Expected Output – %s is not a keyword",input);
        }
    return 0;
}
