#include <stdio.h>
int main(){
	int i,arr[5],sum=0;
	printf("enter the element in array:");
	for(i=0;i<=4;i++){
		scanf("%d",&arr[i]);
	}
	printf("elements of array are:");
	for(i=0;i<=4;i++){
		sum=sum+arr[i];
		
	}
	printf("%d\n",sum);
	return 0;
}