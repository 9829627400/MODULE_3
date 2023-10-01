#include<stdio.h>
main()
{
      int a[4],i,max=0,min=0;
 
      printf("Enter Three Value :");
      for(i=0;i<=2;i++)
          {
            scanf("%d",&a[i]);
          }
      for(i=0;i<=2;i++)
          {
              if(a[i]>max)
               {
                    max=a[i]; 
                   
               }
              else
               {
                    min=a[i];
                   
               }
                   
           }
                   
                    printf("Maximum is : %d\n",max);
                    
} 