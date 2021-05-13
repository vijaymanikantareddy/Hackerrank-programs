#include<stdio.h>
typedef struct
{
	int l,w,h,a;
}BOX;
int main()
{
	int i,n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	BOX b[n];
	printf("Enter the array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&b[i].l,&b[i].w,&b[i].h);
		b[i].a=(b[i].h)*(b[i].w)*(b[i].l);
	}
	for(i=0;i<n;i++)
	{
		if(b[i].h<41)
		{
			printf("%d\n",b[i].a);
		}
	}
}
