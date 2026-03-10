#include <stdio.h>
//program to print matrices
int main(){
	int i,j,k,l;
	printf("enter the size of matrices:");
	scanf("%d%d",&k,&l);
	int arr[k][l];
	printf("enter the element of matrices:");
    for(i=0;i<k;i++){
    	for(j=0;j<l;j++){
    		scanf("%d",&arr[i][j]);
		}
	}
	printf("matrices are:\n");
	
    for(i=0;i<k;i++){
    	for(j=0;j<l;j++){
    		printf("%d ",arr[i][j]);
		}
		printf("\n");
}
	
	return 0;
}