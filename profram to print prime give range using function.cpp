#include <stdio.h>
int prime(int num){
	int i,count=0;
	if (num<2)
	  return 0;
	for (i=1;i<=num;i++){
		if(num%i==0)
		count++;
	}
	if (count==2)
	  return 1;
    else 
      return 0;
}
int main(){
	int start,end,i;
	printf("enter the starting of prime number:");
	scanf("%d",&start);
	printf("enter the ending of prime number:");
	scanf("%d",&end);
	for(i=start;i<=end;i++){
		if(prime(i)){
			printf("%d ",i);
		}
	}
	return 0;
}