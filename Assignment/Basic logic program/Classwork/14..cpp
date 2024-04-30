#include<stdio.h>
int main(){
	
	char choice;
	
	printf("\n Enter your color:");
	scanf(" %c",&choice);
	
	if(choice== 'v'){
		printf("\n Violet is a rainbow color");
	}else if(choice== 'i'){
		printf("\n Indigo is a rainbow color");
	}else if(choice== 'b'){
		printf("\n Blue is a rainbow color");
	}else if(choice== 'g'){
		printf("\n Green is a rainbow color");
	}else if(choice== 'y'){
		printf("\n Yellow is a rainbow color");
	}else if(choice== 'o'){
		printf("\n Orange is a rainbow color");
	}else if(choice== 'r'){
		printf("\n Red is a rainbow color");
	}
	else{
		printf("\n %c is not a rainbow color",choice);
	}
	 
	 printf("\n Bye bye");
}
