#include <stdio.h>
int main (){
int first,num;
printf("enter an number:");
scanf("%d",&num);
first=num;
while(first>=10){
	first=first/10;
	
	}

printf("first digit is %d",first);
return 0;
}