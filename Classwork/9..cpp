#include<stdio.h>
int main(){
	
	int a,b,ans,No;
	char choice;
	
	printf("\n ----------menu----------");
	printf("\n Addition (+)");
	printf("\n Subtraction (-)");
	printf("\n Multiplication (*)");
	printf("\n Division (/)");
	printf("\n modulo (%)");
	
	printf("\n Enter your choice:");
	scanf("%c",&choice);
	
	printf("\n Enter your option number:");
	scanf("%d",&No);
	
	printf("\n Enter your first value:");
	scanf("%d",&a);
	
	printf("\n Enter your second value:");
	scanf("%d",&b);

	if(choice== '+' && No==1){
		ans =a+b;
	}
	if(choice== '-' && No==2){
		ans =a-b;
	}
	if(choice== '*' && No==3){
		ans =a*b;
	}
	if(choice== '/' && No==4){
		ans =a/b;
	}
	if(choice== '%' && No==5){
		ans =a%b;
		}
	
	printf("\n Your ans is %d",ans);
		
		
	}
	
	
