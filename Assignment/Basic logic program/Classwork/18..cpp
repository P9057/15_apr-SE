#include<stdio.h>
int main(){
	
	char choice;
	
	printf("\n Enter your rainbow color:");
	scanf(" %c",&choice);
	
	switch(choice){
		case 'v':
			printf("\n Violet is a rainbow color");
			break;
		case 'i':
			printf("\n Indigo is a rainbow color");
			break;
		case 'b':
			printf("\n Blue is a rainbow color");
			break;
		case 'g':
			printf("\n Green is a rainbow color");
			break;
		case 'y':
			printf("\n Yellow is a rainbow color");
			break;
		case 'o':
			printf("\n Orange is a rainbow color");
			break;
		case 'r':
			printf("\n Red is a rainnbow color");
			break;
			
		default:
			printf("\n The color you choose is not a rainbow color");
			
	}
			printf("\n Bye bye");
}
