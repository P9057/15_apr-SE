// Area of rectangle prism formula
#include<stdio.h>
int main(){
	
	int l,w,h,area;
	
	printf("\n Enter the lenght of triangle:");
	scanf("%d",&l);
	
	printf("\n Enter the width of triangle:");
	scanf("%d",&w);
	
	printf("\n Enter the height of triangle:");
	scanf("%d",&h);
	
	area=2*(w*l+h*l+h*w);
	
	printf("\n The area of  rectangle is %d",area);
}
