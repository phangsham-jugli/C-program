#include<stdio.h>
struct student{
	char name[70];
	int clas;
	int roll;
};
int main(){
	struct student st[3];
    int i;
    printf("enter student info:\n");
    for(i=0;i<3;i++){
    	printf("enter %d student name:",i+1);
    	scanf("%s",&st[i].name);
    	printf("enter %d student class:",i+1);
    	scanf("%d",&st[i].clas);
    	printf("enter %d roll no:",i+1);
    	scanf("%d",&st[i].roll);
	}
	printf("the students info are:\n");
	for(i=0;i<3;i++){
		printf("student name:%s\n",st[i].name);
		printf("student class:%d\n",st[i].clas);
		printf("student roll no:%d\n",st[i].roll);
	}
	return 0;
}