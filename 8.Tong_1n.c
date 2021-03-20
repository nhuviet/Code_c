#include <stdio.h>
float tong_mau(int x);

void main(){
	printf("Tinh S = 1/1 + 1/2 + ... 1/n\n");
	int n;
	printf("Nhap n = ");scanf("%d",&n);
	printf("Ket qua S = %.2f",tong_mau(n));
}

float tong_mau(int x){
	float i,result=0;
	for (i=1;i<=x;i++){
		result+=(1/(float)i);
	}
	return result;
}
