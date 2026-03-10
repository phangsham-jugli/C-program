#include<stdio.h>
int pp(int x,int y){
	int max=x;
	
	if (y>max)
      max=y;
	return max;
}
int pp2(int x,int y){
	int min=x; 
	if(y<min)
	 y=min;
	 return min;
}
int main(){
	int n,m;
	printf("enter the element :");
		scanf("%d%d",&n,&m);
	  printf("max  is %d",pp(n,m));
	  printf("min  is %d",pp2(n,m));
	  return 0;
}