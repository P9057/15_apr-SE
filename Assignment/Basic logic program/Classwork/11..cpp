#include<stdio.h>
int main(){
	
	int x,y;
	
	printf("\n Enter Your x number");
	scanf("%d",&x);
	
	printf("\n Enter your y number");
	scanf("%d",&y);
	
	if(x>y){
		printf("\n %d is greater then %d",x,y);
	}else{
		printf("\n %d is greater then %d",y,x);
	}
}
