#include <stdio.h>

#define Space 3
int main(){
	int number[Space];
	int summition =0;
	printf("Add number ( Only Three ) \n");
	for(int i =0 ;i<Space;i++){
		scanf("%d",&number[i]);
		summition += number[i];
	};
	printf(" Summition :- %d \n", summition);
	
}