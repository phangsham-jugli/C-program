#include <stdio.h>
int main (){
	int digit=0,num,orginal,sum=0;
	printf("enter an number:");
	scanf("%d",&num);
	orginal=num;
	 while(num>0){
	 	digit=num%10;
	 	sum=sum+digit*digit*digit;
	 	num=num/10;
	 }
	 if(orginal==sum){
	 	printf("it is armstrong number");
	 }
	else
	printf("not an armstrong");
	return 0;
}