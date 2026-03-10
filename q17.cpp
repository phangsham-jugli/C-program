#include<stdio.h>
int main(){
	int num,i;
	printf("enter an number to find factor");
	scanf("%d",&num);
	printf("factor of %d are :",num);

	for(i=1;i<=num;i++){
		if ( num%i==0){
			printf("%d ",i);
		}
	   
	}
	return 0;
}
