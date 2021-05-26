#include<stdio.h>
#include <string.h>
void cyclicPermute(char[]);	

int main()
{
	char arr[20] = {'\0'};
	printf("Enter the string: ");
	scanf("%[^'\n']s",arr);
	
	cyclicPermute(arr);
	return 0;
}
void cyclicPermute(char str[])
{
	int len=strlen(str),i;
	char arr2[len];

	for(i=0;i<len;i++)
	{
		int j=i;
		int k=0;
		while(str[j]!='\0')
		{
			arr2[k]=str[j];
			k++;
			j++; 
		}
		j = 0;
		while(j<i)
		{
			arr2[k]=str[j];
			j++;
			k++;
		}
		printf("%s   ",arr2);
	}
}
