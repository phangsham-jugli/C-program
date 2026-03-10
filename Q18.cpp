#include <stdio.h>
int main(){
int i,num,digit=1;	
printf("enter an number ");
scanf("%d",&num);

if(num<=0){
	printf("nummber is negative or zero");
}

else
printf("factorial of %d is:",num);
for(i=1;i<=num;i++){
	digit=digit*i;
	
	
	
}
printf("%d",digit);
return 0;
}
