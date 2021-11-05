#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n,k,i,j,and=0,or=0,xor=0,a,b,c;
    scanf("%d %d",&n,&k);
    for(i=1;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            a=i&j;
           if(a>=and && a<k)
                and=i&j; 
            b=i|j;
            if(b>=or && b<k)
                or=i|j;
            c=i^j;
            if(c>=xor && c<k)
                xor=i^j;
        }
    }
    printf("%d\n%d\n%d",and,or,xor);
}
