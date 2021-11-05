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
    int n,i,p=0,ne=0,z=0;
    float pos,neg,zer;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        if(arr[i]>0)
         p++;
        else if(arr[i]<0)
         ne++;
        else 
         z++;
    }
    pos=(float)p/n;
    neg=(float)ne/n;
    zer=(float)z/n;
    printf("%f\n%f\n%f",pos,neg,zer);    
}
