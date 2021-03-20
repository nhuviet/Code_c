#include <stdio.h>
#include <math.h>

void main(){
	int n,i;
	printf("Tinh S = 1^2 + 2^2 +....+ n^2\n");
	printf("Nhap n = ");scanf("%d",&n);
	
	int S=0;
	for (i=1;i<=n;i++){
		S+=(pow(i,2));
	}
	
	printf("S = %d",S);
}
