#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,d;
    int*pa=&a;
    int *pb=&b;
    scanf("%d\n%d",pa,pb);
    printf("%d",*pa+*pb);
    d=fabs(*pa-*pb);
    printf("\n%d",d);
}
