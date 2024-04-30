#include<stdio.h>
int main(){
	
	// variable declaration
	
	int RollNo,Eng,Sci,Maths;
	float Avg;
	char  Grade;
	
	printf("Enter your Roll.No:");
	scanf("%d",&RollNo);
	
	printf("\n Enter your English marks:");
	scanf("%d",&Eng);
	
	printf("\n Enter your Science marks:");
	scanf("%d",&Sci);
	
	printf("\n Enter your Maths marks:");
	scanf("%d",&Maths);
	
	Avg=(Eng,Sci,Maths)/3;
	
	printf("\n Enter your student Grade:");
	scanf(" %c",&Grade);
	
	printf("\n RollNo: %d Average: %f Grade: %c",RollNo,Avg,Grade);	
	}
