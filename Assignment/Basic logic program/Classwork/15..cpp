#include<stdio.h>
int main(){
	
	float per;
	
	printf("\n Enter your Percentage:");
	scanf("%f",&per);
	
	if(per >=75 && per <=100){
		printf("\n Distriction");
	}else if(per >=60 && per <75){
		printf("\n First class");
	}else if(per >=50 && per <75){
		printf("\n Second class");
	}else if(per >=35 && per <50){
		printf("\n Pass");
	}else{
		printf("\n Fail");
	}
}
