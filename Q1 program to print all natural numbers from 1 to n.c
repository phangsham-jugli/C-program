#include <stdio.h>
int main(){
int i,range;
printf("enter a number:");
scanf("%d",&range);
printf("natural numbers 1 to %d are\n",range);
for(i=1;i<=range;i++){
	printf("%d \n",i);	
	
}
return 0;
}