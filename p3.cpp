#include <stdio.h>

int main(){
	int i,n,j;
	printf("enter an number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("\ntable of %d\n",i);
		for(j=1;j<=10;j++){
			printf("\n%d*%d=%d",i,j,i*j);
		}
	}
	return 0;
}