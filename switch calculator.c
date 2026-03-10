//Program 1: Calculate Area of a Rectangle
#include<stdio.h>
int main(){
float num1,num2;
char op;

printf("choose operator(+,-,*,/)\n:");
scanf("%c",&op);

printf ("enter any two integers\n");
scanf("%f%f",&num1,&num2);

switch (op){
	
	case'+':
		printf("resul=%f",num1+num2);
		break;
			
	case '-':
		printf("result=%f",num1-num2);
		break;
		
	case '/':
		printf("result=%f",num1/num2);
		break;
		
    case '*':
    	printf("result=%f",num1*num2);
    	break;
    	
    default:
    	printf("operation invalid");
    	
}
	
	
return 0;	
}