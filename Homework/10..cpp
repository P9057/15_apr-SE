#include<stdio.h>
int main(){
	
	int x,y;
	
	printf("\n Enter your x value:");
	scanf("%d",&x);
	
	printf("\n Enter your y value:");
	scanf("%d",&y);
	
	if(x>y){
		printf("\n %d is greater then %d",x,y);
	}
	else{
		printf("\n %d is greater then %d",y,x);
	}
}
