#include<stdio.h>
int main(){
	
	// variable declaration
	
	int emp_no,basic_salary,salary,bonus,tax;
	
	printf("\n Enter your Employee number:");
	scanf("%d",&emp_no);
	
	printf("\n Your basic salary:");
	scanf("%d",&basic_salary);
	
	printf("\n Your bonus:");
	scanf("%d",&bonus);
	
	printf("\n Your tax is:");
	scanf("%d",&tax);
	
	salary=(basic_salary+bonus)-tax;
	printf("Your salary is %d",salary);
}
