#include<stdio.h>
float area,radius,length,breadth, height,base;
main()
{
	int option;
	printf("Choose the given option\n");
	printf("1.Area of circle\n2.Area of rectangle\n3.area of triangle\n");
	scanf("%d",&option);
	
	
switch(option)
{
	case 1:
	{
	 printf("enter radius of circle\n");
      scanf("%f",&radius);
	 area= 3.41 * radius * radius;
	 printf("area of circle = %f",area);
	 break;
	}
	case 2:
		{
		
		printf("enter your length\n");
		scanf("%f",&length);
		printf ("enter you breadth\n");
		scanf("%f",&breadth);
		area=  length* breadth;
		printf("area of rectangle=%f", area);
		 break;	
		}
		case 3:
			{ 
			printf("enter  your height\n");
			scanf("%f",&height);
			printf("enter your base\n");
			scanf("%f",&base);
			area=0.5*height* base;
			printf("area of triangle = %f\n",area);
			break;
			}
	
		
		
     default:
	{
	 break;
	 printf("enter your ivalid Input\n");
	}
}


}