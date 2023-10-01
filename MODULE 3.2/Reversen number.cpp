#include<stdio.h>


int main()
{
	int Reminder , Reverse;
	int number ;
	printf("ADD  number = ");
	scanf("%d",&number);
	
	while(number != 0)
	{
		Reminder = number % 10;
		Reverse = Reverse * 10 + Reminder;
		number = number / 10;
				
	};
	printf("Reversed number = %d", Reverse);
}