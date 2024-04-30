#include<stdio.h>
int main(){
	
	int a,b,c;
	
	printf("\n Enter your first value:");
	scanf("%d",&a);
	
	printf("\n Enter your second value:");
	scanf("%d",&b);
	
	printf("\n Enter your third value:");
	scanf("%d",&c);
	
	if(a>b){
		if(a>c){
			printf("\n %d is biggest value",a);
		}
	}else if(b>c){
		printf("\n %d is the biggest value",b);
	}else{
		printf("\n %d is the biggest value",c);
	}
}
