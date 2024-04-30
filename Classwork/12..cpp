#include<stdio.h>
int main(){
	
	int x;
	
	printf("\n Enter your value:");
	scanf("%d",&x);
	
	if(x%2==0){
		printf("\n %d value is even",x);
	}else{
		printf("\n %d value is odd",x);
	}
}
