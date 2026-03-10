#include <stdio.h>
int main(){
	int i,j,k,l,sum=0;
	printf("enter the square of the matrices:\n");
	scanf("%d%d",&k,&l);
	int a[k][l];
	printf("enter the element of matrices:\n");
	for(i=0;i<k;i++){
		for(j=0;j<l;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("the matices is\n");
	for(i=0;i<k;i++){
		for(j=0;j<l;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	//for diagonal sum
	for(i=0;i<k;i++){
		for(j=0;j<l;j++){
			if(i==j||i+j==2){//here i==j is very important and i+j==2 is only valid when we already define array
				sum=sum+a[i][j];//since i+j==2 is not needed
			}
		}
	}
	printf("sum of diagonal matrice:%d",sum);
		
return 0;	
}