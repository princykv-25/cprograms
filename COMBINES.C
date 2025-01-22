#include<stdio.h>
#include<conio.h>
void main()
{
	char str1[100],str2[100],str3[100],combined[300];
	int i=0,j=0,k=0,loop_count=0,comp_count=0;
	printf("Enter the string:");
	scanf("%s",str1);
	printf("Enter the second string:");
	scanf("%s",str2);
	printf("Enter the third string:");
	scanf("%s",str3);
	while(str1[i]!='\0')
	{
		combined[i]=str1[i];
		i++;
		loop_count++;
		comp_count++;
	}
	while(str2[j]!='\0')
	{
		combined[i]=str2[j];
		i++;
		j++;
		loop_count++;
		comp_count++;
	}
	while(str3[k]!='\0')
	{
		combined[i]=str3[k];
		i++;
		j++;
		k++;
		loop_count++;
		comp_count++;
	}
	combined[i]='\0';
	printf("Combined string is: %s\n",combined);
	printf("Number of times loop executed: %d",loop_count);
	printf("number of comparisons: %d",comp_count);
	getch();
}