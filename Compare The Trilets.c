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
int main()
{
    int a[3],b[3],i,ai=0,bi=0,ci=0;
    for(i=0;i<3;i++)
        scanf("%d",&a[i]);
    for(i=0;i<3;i++)
        scanf("%d",&b[i]);
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
            ai++;
        else if(a[i]<b[i])
            bi++;
        else   
            ci++;     
    }    
    printf("%d %d",ai,bi);
}
