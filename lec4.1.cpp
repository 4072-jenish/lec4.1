#include<stdio.h>

main(){
	
	int a,b,c;
	
	printf("Enter A or B :");
	scanf("%d%d",&a,&b);
	
	c=a;
	a=b;
	b=c;
	
	printf("A=%d,B=%d",a,b);
}
