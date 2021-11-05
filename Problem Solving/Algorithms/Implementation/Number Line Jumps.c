#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);
char** split_string(char*);

int parse_int(char*);
int main()
{
    int i,n=10000,x1,v1,x2,v2,k1[10000],k2[10000],count=0;
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
    for(i=0;i<n;i++)
        k1[i]=x1+(v1*(i+1));
    for(i=0;i<n;i++)
        k2[i]=x2+(v2*(i+1));
    for(i=0;i<n;i++)
    {
        if(k1[i]==k2[i])
            count++;
    }
    if(count==0)
        printf("NO");
    else 
        printf("YES");        
}
