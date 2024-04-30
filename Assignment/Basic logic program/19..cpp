// Calculate compound interest
#include<stdio.h>
int main(){
	
	int p,t,r;
	float si;
	
	printf("\n Enter the principle amount:");
	scanf("%d",&p);
	
	printf("\n Enter the number of years:");
	scanf("%d",&t);
	
	printf("\n Enter the rate of interest:");
	scanf("%d",&r);
	
	si=p*(r/(t*100));
	
	printf("\n Your simple interest is %f",si);
	
	
}
