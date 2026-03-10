#include<stdio.h>
int fa(int f){
	int i,fact=1;
	for(i=1;i<=f;i++){
		fact=fact*i;
	}
	return fact;
}
int main(){
	int n;
	printf("enter an number:");
	scanf("%d",&n);
	printf("factorial of %d is %d",n,fa(n));
	return 0;
}

