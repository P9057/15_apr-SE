#include<stdio.h>
int main(){
	
	// variable declaration
	
	int p,r,n;
	double i;
	
	printf("\n Enter your principle amount:");
	scanf("%d",&p);
	
	printf("\n Enter your rate of interest:");
	scanf("%d",&r);
	
	printf("\n Enter the number of years:");
	scanf("%d",&n);
	
	i=(p*r*n)/100;
	
	printf("\n Your simple interest is: %lf",i);
}
