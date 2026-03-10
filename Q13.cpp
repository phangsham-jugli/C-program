
#include <stdio.h>
int main(){
	int num,sum=0,digit;
	printf("enter an number :");
	scanf("%d",&num);
	while(num!=0){
		digit=num%10;
		sum=sum+digit;
		num=num/10;
	}	
	printf("sum of all number is %d",sum);
	return 0;
}