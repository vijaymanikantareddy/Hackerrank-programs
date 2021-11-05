#include <stdio.h>
int maxi();
int main() 
{
    int max;
    max=maxi();
    printf("%d",max);  
}
int maxi(int a,int b, int c, int d)
{
    int max;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b && a>c && a>d)
        max=a;
    else if(b>c && b>d)
        max=b;
    else if(c>d)
        max=c;
    else 
        max=d;
    return max;                
}
