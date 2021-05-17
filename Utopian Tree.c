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
    int i,n,j;
    scanf("%d",&n);
    int a[n],sum[n];
    for(i=0;i<n;i++)
    {
        scanf("\n%d",&a[i]);    
    }
    for(i=0;i<n;i++)
    {
        sum[i]=1;
        for(j=1;j<=a[i];j++)
        {
            if(j%2!=0)
                sum[i]=2*sum[i];
            else
                sum[i]=sum[i]+1;
        }
        printf("%d\n",sum[i]);
    }
}
