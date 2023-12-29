#include<stdio.h>

main(){
	
	int a,b,c;
	
	printf("Enter A or B :");
	scanf("%d%d",&a,&b);
	
	a=b-a;
	b=a-b;
	a=b-a;
	
	printf("A=%d,B=%d",a,b);
}
