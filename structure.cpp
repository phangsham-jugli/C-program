#include<stdio.h>
	struct babs{
	int page;
	char name[50];
	char author[50];	
	}bab;
int main(){
struct babs bab={1,"au","me"};
 printf("the page no is %d\n",bab.page);	
 printf("the name  is %s\n",bab.name);
 printf("the author name is %s\n",bab.author);
 return 0;		
}