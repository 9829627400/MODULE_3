#include<stdio.h>
int quantity;
char payment;
char phonename;
samsung()
{
	printf("you choose samsung\n");
	printf("Enter your phone name\n");
	scanf("%s",&phonename);

	printf("number of phone you want to buy\n");
    scanf("%d",&quantity);
    
   
    if(quantity<=100)
    {
    	printf("we have quantity\n");
	}
	else
	{
		printf("no quantity\n");
	}
   
	printf("payment option\n");
	scanf("%s",&payment);
    

}


nokia()
{
	printf("you choose nokia\n ");
	printf("Enter your phone name\n");
	scanf("%s",&phonename);

	printf("number of phone you want to buy\n");
    scanf("%d",&quantity);
    
   
    if(quantity<=100)
    {
    	printf("we have quantity\n");
	}
	else
	{
		printf("no quantity\n");
	}
   
	printf("payment option\n");
	scanf("%s",&payment);
    
	
}
oneplus()
{
	printf(" you choose oneplus \n");
	printf("Enter your phone name\n");
	scanf("%s",&phonename);

	printf("number of phone you want to buy\n");
    scanf("%d",&quantity);
    
   
    if(quantity<=100)
    {
    	printf("we have quantity\n");
	}
	else
	{
		printf("no quantity\n");
	}
   
	printf("payment option\n");
	scanf("%s",&payment);
    
}
iphone()
{
	printf(" you choose iphone \n");
	printf("Enter your phone name\n");
	scanf("%s",&phonename);

	printf("number of phone you want to buy\n");
    scanf("%d",&quantity);
    
   
    if(quantity<=100)
    {
    	printf("we have quantity\n");
	}
	else
	{
		printf("no quantity\n");
	}
   
	printf("payment option\n");
	scanf("%s",&payment);
    
}
redmi()
{
	printf("redmi\n");
	printf("Enter your phone name\n");
	scanf("%s",&phonename);

	printf("number of phone you want to buy\n");
    scanf("%d",&quantity);
    
   
    if(quantity<=100)
    {
    	printf("we have quantity\n");
	}
	else
	{
		printf("no quantity\n");
	}
   
	printf("payment option\n");
	scanf("%s",&payment);
    
}
int basic()
{
 int age;
 char name[1];
 char loction[1];
 char email[1];
 int contact;

printf("Enter your name :\n");
gets (name);

printf ("Enter your loction:\n");
gets (loction);

printf("Enter your age:\n");
scanf("%d",&age);

printf("Enter your email:\n");
scanf ("%s,&email");

printf("Enter your contact:\n");
scanf("%d",&contact);

 int brand;
printf("choose your mobile brand \n");
scanf("%d",&brand);

	if(brand==1)
	{
		samsung();
	}
	else if(brand==2)
	{
		nokia();
	}
	else if(brand==3)
	{
		oneplus();
	}
		else if(brand==4)
	{
		iphone();
	}
		else if(brand==5)
	{
		redmi();
	}
   else 
   {
   	printf("not in stock");
   }

}
  
main()
{
	basic();
}


