#include <stdio.h>
int main(){
	int digit,num,reverse=0;
	printf("enter a number:");
	scanf("%d",&num);
	while(num!=0){
		digit=num%10;
		reverse=reverse*10+digit;
		num=num/10;
	}
	while(reverse>0){
		digit=reverse%10;
		switch(digit){
			case 0:
				printf("zero,");
				break;
			case 1:
				printf("one,");
				break;	
			case 2:
				printf("two,");
				break;
			case 3:
				printf("three,");
				break;
			case 4:
				printf("four,");
				break;
			case 5:
				printf("five,");
				break;
			case 6:
				printf("six,");
				break;
			case 7:
				printf("seven,");
				break;
			case 8:
				printf("eight,");
				break;
			case 9:
				printf("nine,");
				break;
				
				
		}
		reverse=reverse/10;
	}
	return 0;
}