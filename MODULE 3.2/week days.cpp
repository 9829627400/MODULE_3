#include<stdio.h>
int days;
main()
{   
    printf("enter week days\n");
    scanf("%d",&days);
	
	
	switch(days)
	{
	case 1:
	printf("monday");
	break;
	
	case 2:
	printf("tuesday"); 
	break;
	case 3:
	printf("wednesday");
	break;
	case 4:
	printf("thrusday");
	break;
	case 5:
	printf("friday");
	break;
	case 6:
	printf("saturday");
	break;
	case 7:
	printf("sunday");
	break;
	default:
		printf("invalid day , please enter 1-7 weeks days");
		
	}
	
}