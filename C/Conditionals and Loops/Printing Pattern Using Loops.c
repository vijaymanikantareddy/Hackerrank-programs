#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int max(int, int);
int main() 
{

    int n,i,j,k;
    scanf("%d", &n);
    k=2*n-1;
    for(i=1 ; i<=k ; i++)
    {
        for(j=1 ; j<=k ; j++)
            printf("%d ",max(abs(i-n),abs(j-n))+1);
        printf("\n");    
    }
  	// Complete the code to print the pattern.
    return 0;
}
int max(int a, int b)
{
    if (a>b)
        return a;
    else
        return b;    
}
