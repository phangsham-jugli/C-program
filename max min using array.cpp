#include <stdio.h>
int main(){
	int i,n;
	printf("enter the size of matrices:");
	scanf("%d",&n);
	int arr[n];
	printf("enter the element of matrices:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int max=arr[0];
	int min=arr[0];
	
		for(i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
		if(arr[i]<min){
		min=arr[i];
		}
		
	}
  printf("max=%d\n",max);
  printf("min=%d",min);
  return 0;	
	
}