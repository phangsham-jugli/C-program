#include <stdio.h>
int main(){
	int i,j,r,c;
	int a[10][10],tranpose[10][10];
	printf("enter the row:");
	scanf("%d",&r);
	printf("enter the coulm of matrices:");
	scanf("%d",&c);
	printf("enter the element of matrices:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	  printf("the marices is:\n");
	  for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
		
		for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			tranpose[j][i]=a[i][j];
		}
	}
	printf("the tranpose of matrices is:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",tranpose[i][j]);
		}
		printf("\n");
	}
		
		
		
	
	return 0;
}