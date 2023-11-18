#include <stdio.h>
#include <string.h>
int main()
{
	int i,j,k,flag1,flag=0;
    char string[100]; char search[50];
    int count1 = 0, count2 = 0;
	printf("Enter the string:");
	gets(string);

	printf("Enter the substring:");
	gets(search);
	
	while(string[count1]!='\0')
	{
		count1 += 1;
	}
	while(string[count2]!='\0')
	{
		count2 += 1;
	}
	for (i=0;i<count1-count2;i++)
	{
		for(j=i;j<i+count2;j++)
		{
			flag1=i;
			if (string[j]==search[j-i])
			{
				flag=1;
			}
			if(flag==1)
			{
				printf("index where substring occur: %d",flag1);
				break;
			}
		}
	}
	return 0;
}