#include <stdio.h>
int swap(int *x ,int *y){
	int temp = *x;
	*x=*y;
	*y=temp;
	return 0;
}
int main(){
	int a,b;
	printf("enter the two number:");
	scanf("%d%d",&a,&b);
	printf("before swaping a=%d and b=%d\n",a,b);
	swap(&a,&b);
	printf("after swaping a=%d and b=%d",a,b);

	return 0;
}