#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Okey Doke, Time to make Mario, That Little Twerp, Jump The F@#$!!!!! Blocks. Please give me an int for the height of the blocks Mario TLT will jump:\n");//Changed 1st printf command to prompt user for a integer.  Deleted 2nd printf command.
    int n = GetInt();
    
    if (n >=0 && n <= 23)
    {
        printf("Thank you, you picked a useable height for the half-pyramid of blocks!\n");
     }
     else
     {
        printf("Sorry, that number won't work, please try again!\n");
     }
}
