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
void staircase();
int main()
{
  int n;
  scanf("%d",&n);
  staircase(n);
}
void staircase(int n) 
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<n-i+1;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
