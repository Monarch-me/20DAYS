#include<stdio.h>
void main()
{
	int i,j,n,newGrade[50],grade[50],re=0,k;
	
	printf("enter the size of array:\n");
	scanf("%d",&n);
	printf("enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&grade[i]);
	} 
	for(i=0;i<n;i++)
	{
		re=((grade[i])%5);
		k=(5-re);
		newGrade[i]=(grade[i]+(5-re));
		printf("value of new grade for %d is %d\n",i,newGrade[i]);
	if(newGrade[i] <40 || k>=3)
	{
		newGrade[i]=grade[i];
	}
	else
	continue;
}
printf(">>>>>>>>>>>>>>>  grade after evaluation is <<<<<<<<<<<<<<<\n");
for(i=0;i<n;i++)
{
	printf("%d\n",newGrade[i]);
 } 
}
