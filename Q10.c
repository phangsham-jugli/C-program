#include <stdio.h>
int main(){
	int input,first,last;
	printf("enter an number:");
	scanf("%d",&input);
	
	last = input%10;
	
	first = input;
	
	while(first>=10){
		first = first/10;
		
		
	}
	printf("first and last digit of number are %d and %d",first,last);
	return 0;
}
