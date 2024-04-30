#include<stdio.h>
int main(){
	
	int limit,n,i=1;
	
	printf("\n Enter your limit:");
	scanf("%d",&limit);
	
	printf("\n Enter divide number:");
	scanf("%d",&n);
	
	while(i<=limit){
		if(i%n==0){
			printf("\n %d",i);
		}
		i++;	
	}
}
	
	

