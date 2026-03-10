#include <stdio.h>
int main(){
int num,orginal,reverse,digit;
printf("enter an number:");
scanf("%d",&num);
orginal=num;
while(num!=0){
	digit=num%10;
	reverse=reverse*10+digit;
	num=num/10;
}
if(reverse==orginal){
	printf("it is palindrom");
}
else
printf("not an palindrom");
return 0;

}