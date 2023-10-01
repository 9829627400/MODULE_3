#include<stdio.h>
#define Space 5
int main()
{
	int number[Space];
	int highestnumber is = 0;
	printf("ANY 5 DIGIT NUMBER ONLY\n");
	for(int i=0;i<Space;i++)
	{
		scanf("%d",&number[i]);
		if(number[i] > highestnumber)
		{
			highestnumber = number[i];
		}
	};
	printf("highestnumber = %d",highestnumber);
}