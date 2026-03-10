#include<stdio.h>
int main(){
	int i,num,sum=0,orginal;
	printf("enter an number:");
	scanf("%d",&num);
	orginal=num;
	printf("factor of %d are:",num);
	for(i=1;i<num;i++){
		if(num%i==0){
			printf("%d,",i);
		 sum=sum+i;
		}
		
	}
	if (orginal==sum)
	printf("\nand it is perfect number");
	else
	printf("\nnot an perfect number");
	return 0;
}