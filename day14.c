#include<stdio.h>
#include<string.h>
void main()
{
	int i,j,n,count=0;
	char s[50],t[50];
	printf("enter s string:\n");
	scanf("%s",&s);
	printf("enter t string:\n");
	scanf("%s",&t);
	if(strlen(s)==strlen(t))
	{
		n=strlen(s);
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(s[i]==t[j])
				{
					count++;
					break;
				}
			}
		}
		if(count==n)
		{
			printf("\ntrue anagram");
		}
		else
		{
			printf("\n false anagram");
		}
	} 
	else
	printf("enter a valid string");
}
