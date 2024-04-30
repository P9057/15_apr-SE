#include<stdio.h>
int main(){
	
	char color;
	
	printf("\n Enter your color:");
	scanf(" %c",&color);
	
	if(color== 'r' || color== 'a' || color== 'i' || color== 'n' || color== 'b' || color == 'o' || color == 'w'){
		printf("\n %c is rainbow color",color);
		}else{
		printf("\n %C is not rainbow color",color);
		
	}		
		
	
}
