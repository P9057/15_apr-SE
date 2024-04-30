#include<stdio.h>
int main(){
	
	// variable declaration
	
	int emp_no,basic_salary,salary,bonus,tax;
	
	printf("Enter your employee number:");
	scanf("%d",&emp_no);
	
	printf("\n Your basic salary:");
	scanf("%d",&basic_salary);
	
	printf("\n Your bonus_salary:");
	scanf("%d",&bonus);
	
	printf("\n Your tax:");
	scanf("%d",&tax);
	
	salary=(basic_salary+bonus)-tax;
	
	printf("\n Your salary is %d",salary);
}
