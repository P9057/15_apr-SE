#include<stdio.h>
int main(){
	
	int a,b,ans,No;
	
	printf("\n -----------MENU----------");
	printf("\n 1. Addition (+)");
	printf("\n 2. Subtraction (-)");
	printf("\n 3. Multiplication (*)");
	printf("\n 4. Division (/)");
	
	printf("\n Enter your option number:");
	scanf("%d",&No);
	
	printf("\n Enter your first value:");
	scanf("%d",&a);
	
	printf("\n Enter your second value:");
	scanf("%d",&b);
	
	switch(No){
		case 1:
			printf("\n Addition is %d",a+b);
			break;
			
		case 2:
			printf("\n Subtraction is %d",a-b);
			break;
		00
		case 3:
			printf("\n Multiplication is %d",a*b);
			break;
			
		case 4:
			printf("\n Division is %d",a/b);
			break;
			
		default:
			printf("\n The number you choose is wrong");	
	}
			printf("\n Bye bye");		
	}
	

