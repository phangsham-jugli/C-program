#include<stdio.h>
int main(){
	int i,j,n,sum=0,flag=1;
	printf("enter the number:");
	scanf("%d",&n);
	if(n<=0){
		printf("it is invalid");
		return 0;
	}
	for(i=2;i<=n;i++){
		flag=1;
		for(j=2;j<=i/2;j++){
			if(i%j==0){
				flag=0;
				break;
			}
		}
		if(flag==1){
			sum=sum+i;
		}
	}
	printf("the sum of prime are:%d",sum);
	return 0;
}