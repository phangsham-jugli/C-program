#include <stdio.h>
int main(){
	int i,range,sum=0;
	printf("enter an number:");
	scanf("%d",&range);
	printf("sum off all natural number from 1 to %d is :",range);
	for(i=1;i<=range;i++){
		sum= sum+i;
	}
	printf("%d",sum);
	return 0;
}