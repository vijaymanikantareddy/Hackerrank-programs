#include<stdio.h>
int main()
{
	int i,n=10000,x1,v1,x2,v2,k1[10000],k2[10000],count=0;
	printf("enter x1, v1, x2, v2 values: ");
	scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
	for(i=0;i<n;i++)
		k1[i]=x1+(v1*(i+1));
	for(i=0;i<n;i++)
		k2[i]=x2+(v2*(i+1));
	for(i=0;i<n;i++)
	{
		if(k1[i]==k2[i])
			count++;
	}
	if(count==0)
		printf("NO");
	else 
		printf("YES");		
}
