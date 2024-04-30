#include<stdio.h>
int main(){
	
	int n,sum=0,i=1;
	float average;
	
	printf("\n Enter your number:");
	scanf("%d",&n);
	
	while(i<=5){
		printf("\n Enter your sum number:");
		scanf("%d",&n);
		sum=sum+n;
		i++;
		}
		average= sum/5;
		printf("\n Average is %f",average);
}
