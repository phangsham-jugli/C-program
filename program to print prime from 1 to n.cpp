#include <stdio.h>
int main(){
	int i,j,n,count;
	printf("enter the number to print prime number from 1 to n:");
	scanf("%d",&n);
	printf("the prime numbr from 1 to n:");
	for(i=1;i<=n;i++){
		count=0;
		for(j=1;j<=i;j++){
			if(i%j==0){
				count++;
			}
			
		}
	if(count==2){
		printf("%d ",i);
	}
}
	return 0;
}