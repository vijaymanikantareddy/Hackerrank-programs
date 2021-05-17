#include<stdio.h>
int student(int n,int marks[*]);
int main()
{
	int n,i,sum=0;
	scanf("%d",&n);
	int marks[n];
	for(i=0;i<n;i++)
		scanf("%d",&marks[i]);
	sum=student(n,marks);
	printf("%d",sum);
}
int student(int n,int marks[n])
{
	char ch;
	scanf(" %c",&ch);
	int i,sum=0;
	if(ch=='b')
	{
		for(i=0;i<n;i++)
		{
			if(i%2==0)
				sum=sum+marks[i];	
		}
	}
	if(ch=='g')
	{
		for(i=0;i<n;i++)
		{
			if(i%2!=0)
				sum=sum+marks[i];	
		}
	}
	return sum;
}
