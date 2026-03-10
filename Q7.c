#include <stdio.h>
int main(){
	int i,range,sum=0;
	printf("enter an number:");
	scanf("%d",&range);
	printf("all odd natural numbers from 1 to %d are:",range);
	for (i=1;i<=range;i++){
		if(i%2!=0){
			
     	printf("%d,",i);
		sum=sum+i;
	}
	}
	printf("\nsum of all odd numbers are:%d",sum);
	return 0;
}                  