#include <stdio.h>
int main(){
	int i,n,j,k,l,m;
	printf("enter the size of array:");
	scanf("%d%d",&j,&k);
	int arr[j][k];
	printf("enter the element in matrices");
	for(i=0;i<j;i++){
		for(l=0;l<k;l++){
			scanf("%d",&arr[i][l]);
		}
	}
	printf("the element in matrices\n");
	for(i=0;i<j;i++){
		for(l=0;l<k;l++){
			printf("%d ",arr[i][l]);
		}
		printf("\n");
	}
	return 0;
}