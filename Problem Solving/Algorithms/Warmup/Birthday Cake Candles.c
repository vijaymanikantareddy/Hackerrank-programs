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
    long long int i,count=0,max;
    int n;
    scanf("%d",&n);
    long long int a[n];
    for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(max<=a[i])
            max=a[i];
    }    
    for(i=0;i<n;i++)
    {
        if(a[i]==max)
        count++;
    }
    printf("%lld",count);
}
