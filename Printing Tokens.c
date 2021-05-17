#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {

    char s[20000];
    int l,i;
    scanf("%[^\n]", s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]!=' ')
        {
            printf("%c",s[i]);
        }
        else
        {
            printf("\n");
        }
    }
    return 0;
}
