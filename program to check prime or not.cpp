#include <stdio.h>
int main(){
int i,j,count=0;
printf("enter the number:\n");
scanf("%d",&j);
for (i=1;i<=j;i++){
	if(j%i==0){
		count++;
	}
}
if(count==2){
	printf("it is prime");
}
else{
	printf("it is not an odd");
}
return 0;
}