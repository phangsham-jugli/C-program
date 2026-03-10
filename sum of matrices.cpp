#include <stdio.h>
 int main (){
 	int i,j,l,k;
 	printf("enter the size of matrtices: ");
 	scanf("%d%d",&l,&k);
    int arr[l][k];
    printf("enter the element of matrices:\n");
    for(i=0;i<l;i++){
    	for(j=0;j<k;j++){
    		scanf("%d",&arr[i][j]);
		}
	}
	printf("matrices are:\n");
	for(i=0;i<l;i++){
    	for(j=0;j<k;j++){
    	printf("%d ",arr[i][j]);
    	
		}
			printf("\n");
	}
	
 	return 0;
 }