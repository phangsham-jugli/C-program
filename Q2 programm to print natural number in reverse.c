#include <stdio.h>
int main(){
	int i,range;
	printf("enter a number:");
	scanf("%d",&range);
	printf("natural number in reverse from %d to 1 are:\n",range);
	for(i=range;i>=1;i--){
		printf("%d\n",i);
	
	}
	
	
	
	return 0;
}