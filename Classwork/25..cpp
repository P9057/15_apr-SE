#include<stdio.h>
int main(){
	
	int n,i,fact=1;
	
	printf("\n Enter your factorial number:");
	scanf("%d",&n);
	
	i=n;
	while(i>=1){
		printf("\n %d",i);
		fact=fact*i;
		i--;
	}
	
	printf("\n Factorial is %d",fact);
}
