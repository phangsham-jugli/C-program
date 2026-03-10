#include <stdio.h>
int check(int a){
	if(a%2==0){
     return 0;
	}
	else{
		return 1;
	}
}
int main(){
	int result, x;
	printf("enter the number to check wether a number is odd or even:");
	scanf("%d",&x);
	result=check(x);
	if(result==0){
		printf("%d is even",x);
	}
	else{
		printf("%d is odd",x);
	}
	return 0;
}