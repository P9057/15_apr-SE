#include<stdio.h>
int  main(){
	
	int n,i=1;
	
	printf("\n Enter your limit:");
	scanf("%d",&n);
	
	while(i<=n){
	if(i%2==0){
		printf("\n %d is even",i);
		}else{
			printf("\n %d is odd",i);
		}
		i++;
	}
}
