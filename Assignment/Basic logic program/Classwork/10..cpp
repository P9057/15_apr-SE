#include<stdio.h>
int main(){
	
	int age;
	
	printf("\n Enter your age");
	scanf("%d",&age);
	
	if(age>=18){
		printf("\n You are eligible for vote");
	}else{
		printf("\n You are not eligible for vote");
		printf("\n You have %d years left",18-age);
	}
	printf("\n Bye bye");
}
