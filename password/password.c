// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <cs50.h>


bool valid(string str);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
bool valid(string str)
{
    bool res1 = false;
    bool res2 = false;
    bool res3 = false;
    bool res4 = false;
    int n = strlen(str);

    for (int i = 0; i < n; i++)
    {
        if(str[i]>='a' && str[i]<='z' ){
            res1 = true;
        }
        else if (str[i]>='A' && str[i]<='Z' ){
            res2 = true;
        }
        else if (str[i]>='0' && str[i]<='9' ){
            res3 = true;
        }

       else if(str[i] == '!' || str[i] == '@' || str[i] == '#' || str[i] == '$'
      || str[i] == '%' || str[i] == '^' || str[i] == '&' || str[i] == '*'
      || str[i] == '(' || str[i] == ')' || str[i] == '-' || str[i] == '{'
      || str[i] == '}' || str[i] == '[' || str[i] == ']' || str[i] == ':'
      || str[i] == ';' || str[i] == '"' || str[i] == '\'' || str[i] == '<'
      || str[i] == '>' || str[i] == '.' || str[i] == '/' || str[i] == '?'
      || str[i] == '~' || str[i] == '`' )
      {

         res4 = true;

      }
    }
    return res1 && res2 && res3 && res4;
}
