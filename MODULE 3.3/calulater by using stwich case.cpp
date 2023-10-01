#include<stdio.h >  
  
int main()  
{  
    int a, b;  
    char choice;  
  
    printf("Enter your choice\n");  
    printf("A. Addition\nB. Subtraction\nC. Multiplication\nD. Division\n");  
    scanf("%c", &choice);  
  
  
   printf("Enter 2 integer numbers\n");  
   scanf("%d %d", &a, &b);  
  
  
    switch(choice)  
    {  
        case 'A': printf("%d + %d = %d\n", a, b, (a+b));  
                break;  
  
        case 'B': printf("%d - %d = %d\n", a, b, (a-b));  
                break;  
  
        case 'C': printf("%d x %d = %d\n", a, b, (a*b));  
                break;  
  
        case 'D': if( b != 0)  
                    printf("%d / %d = %d\n", a, b, (a/b));  
                else  
                    printf("Number can't be divided by 0\n");  
                break;  
  
        default: printf("invaild\n");  
                 break;  
    }  
  
    return 0;  
}  