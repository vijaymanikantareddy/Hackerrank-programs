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
    int n,i,j,temp,m;
    scanf("%d %d",&n,&m);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(j=1;j<=m;j++)
    {
        temp=a[0];
        for(i=0;i<n;i++)
        {
            a[i]=a[i+1];
        }
        a[n-1]=temp;
    }    
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
