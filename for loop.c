#include <stdio.h>
int main(){
	int i,range,sum=0;
	printf("enter any number");
	scanf("%d",&range);
	printf(" odd numbers are\n");
	for(i = 1;i <= range; i++)
	
	{
	    if(i %2 !=0){
		
	    	
		printf("%d,",i);
		sum= sum + i;
	}
	}
	
	printf("\nsum of odd numbers are:%d",sum);
	
	
	
		
	return 0;
}