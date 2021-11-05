#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n,i,sum=0;
    int *arr;
    scanf("%d",&n);
    arr=(int *) malloc(n*sizeof(int));
    if(arr==NULL)
    {
        printf("Error! Memory Not Allocated");
        exit(0);
    }
    for(i=0;i<n;i++){
        scanf("%d",arr+i);  
         sum+=*(arr+i);
         }
    printf("%d",sum);     
    return 0;
}
