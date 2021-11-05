#include <assert.h>
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
    long long int i,n,sum=0;
    scanf("%lld",&n);
    long long int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
        sum+=arr[i];
    }
    printf("%lld",sum);
}
