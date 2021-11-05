#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch,sen[120],s[120];
    scanf("%c",&ch);
    scanf("%s",s);
    scanf("\n%[^\n]",sen);
    printf("%c\n",ch);
    puts(s);
    printf("%s",sen);    
    return 0;
}
