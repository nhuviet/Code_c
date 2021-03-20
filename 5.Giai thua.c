#include <stdio.h>
int factorial(int x);

void main(){
	int n;
	printf("Tinh n!\n");
	printf("Nhap so n: ");scanf("%d",&n);
	printf("%d!=%d",n,factorial(n));
}

int factorial(int x){
	int i,fact=1;
	for (i=1;i<=x;i++){
		fact*=i;
	}
	return fact;
}
