#include <stdio.h> 
 
int main() { 
  int number[10]; 
  int j;
  int even=0;
  int  odd=0;
  int  total=0 ;
 
  for( j=0; j<10; j++ )
   { 
    printf( "Enter number : "); 
    scanf( "%d", &number[j] ); 
 
    if( number[j]%2 == 0 ) 
      even=even+number[j];
     
    else 
      odd=odd+number[j]; 
  
     total= even + odd;
  } 
 
  printf( "Analysis: \n" ); 
  printf( "Sum of all odd numbers is : %d\n", odd ); 
  printf( "Sum of all even numbers is : %d\n", even ); 
  printf( "Sum of all 10 numbers is : %d\n", total );

 



} 