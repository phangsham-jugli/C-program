#include <stdio.h>
int main(){
	char ch;
	 printf("choose any operator (+,-,*,/):");
	 scanf("%c",&ch);
	 float a,b;
	 printf("enter two numbers :");
	 scanf("%f%f",&a,&b);
	 switch (ch){
	  case '+':
	  	printf("%f+%f=%f",a,b,a+b);
	  	break;
	  case '-':
	  	printf("%f-%f=%f",a,b,a-b);
	  	break;
	  case '*':
	  	printf("%f*%f=%f",a,b,a*b);
	  	break;
	  case '/':
	  	printf("%f/%f=%f",a,b,a/b);
	  	break;
	   default:
	   	printf("invalid");
	 } 
	 return 0;
}