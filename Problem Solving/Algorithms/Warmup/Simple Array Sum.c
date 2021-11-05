#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i,n,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
           scanf("%d ",&a[i]);
           sum+=a[i];
    }
    printf("%d",sum);  
}
