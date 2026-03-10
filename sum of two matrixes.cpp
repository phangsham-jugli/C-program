#include <stdio.h>
int main(){
	int i,j,row,col;
	printf("enter the size of matrices:\n");
	scanf("%d%d",&row,&col);
	int a[row][col],b[row][col],sum[row][col];
	printf("enter the element of first matrices:\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the second matrices\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&b[i][j]);
		}
	}
		for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	
		printf("the sum of matrices:\n");
     for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d ",sum[i][j]);	
		}
		printf("\n");
	}
	
	return 0;
}