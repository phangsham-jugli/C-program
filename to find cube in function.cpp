#include <stdio.h>
int cube(int x){
	return x*x*x;
}
int main(){
	int a,result;
	printf("enter the number to find its cube:");
	scanf("%d",&a);
	result=cube(a);
	printf("the cube is: %d",cube(a));
	return 0;
}