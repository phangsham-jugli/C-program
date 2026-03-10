#include <stdio.h>
int main(){
	int num,count;
	printf("enter an numbers");
	scanf("%d",&num);
	while(num!=0){
	   num=num/10; 
	   count++; 
	}
	    printf("%d",count);
	return 0;
	
}