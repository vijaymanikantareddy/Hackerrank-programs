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
    long long int a[5],i,min,max,sum=0,ss,sb;
    for(i=0;i<5;i++)
    {
        scanf("%lld",&a[i]);
        sum+=a[i];
    }
    min=a[0];
    for(i=0;i<5;i++)
    {
        if(min>=a[i])
            min=a[i];
    }
    max=a[0];
    for(i=0;i<5;i++)
    {
        if(max<=a[i])
            max=a[i];
    }
    ss=sum-min;
    sb=sum-max;
    printf("%lld %lld",sb,ss);
}
