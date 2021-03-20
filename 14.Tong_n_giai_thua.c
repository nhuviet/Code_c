#include <stdio.h>
int factorial(int x);

int main(){
	int n,i;
	printf("Tinh S = 1! + 2! + 3! +.....+ n!\n");
	printf("Nhap n = ");scanf("%d",&n);
	
	int S=0;
	for (i=1;i<=n;i++){
		S+=factorial(i);
	}
	printf("S = %d",S);
} 


int factorial(int x){
	int i,fact=1;
	for (i=1;i<=x;i++){
		fact*=i;
	}
	return fact;
}
