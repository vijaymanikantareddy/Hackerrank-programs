#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int c0=0,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0,i,n;
	scanf("%s",s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		if(s[i]=='0')
			c0++;
		else if(s[i]=='1')
			c1++;
		else if(s[i]=='2')
			c2++;
		else if(s[i]=='3')
			c3++;
		else if(s[i]=='4')
			c4++;
		else if(s[i]=='5')
			c5++;
		else if(s[i]=='6')
			c6++;
		else if(s[i]=='7')
			c7++;
		else if(s[i]=='8')
			c8++;
		else if(s[i]=='9')
			c9++;
	}
	printf("%d %d %d %d %d %d %d %d %d %d",c0,c1,c2,c3,c4,c5,c6,c7,c8,c9);
}
