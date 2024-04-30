#include<stdio.h>
int main(){
	
	char color;
	
	printf("\n Enter your color:");
	scanf(" %c",&color);
	
	if(color== 'r' || color== 'a' || color== 'i' || color== 'n' || color== 'b'){
		printf(" %c is  a rainbow color",color);
	}else{
		printf(" %c is not a rainbow color",color);
		
	}
}
