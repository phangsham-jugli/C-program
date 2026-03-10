#include <stdio.h>
int main (){
	int input,first,last;
	printf("enter an number");
	scanf("%d",&input);
	last=input%10;
	first=input;
	while(first>=10){
		first=first/10;
		
		
		
	}
	printf("sum of first and last is %d",first+last);
	return 0;
}