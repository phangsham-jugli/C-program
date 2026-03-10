#include <stdio.h>
int main(){
	int input,first,last,temp;
	printf("enter an number:");
	scanf("%d",&input);
	last = input%10;
	first = input;
	while(first >=10){
		first=first/10;
	}
	printf("first digit is %d ",first);
	printf("last digit is %d ",last);
	temp=first;
	first=last;
	last=temp;
	printf(" \nafter swapping first and last are %d,%d",first,last);
	return 0;
}