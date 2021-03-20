#include <stdio.h>

void main(){
	int a,b;
	float x;
	printf("Tinh nghiem phuong trinh a*x+b=0\n");
	printf("Nhap he so phuong trinh\n");
	printf("a = ");scanf("%d",&a);
	printf("b = ");scanf("%d",&b);
	if (a==0){
		printf("Phuong trinh vo nghiem\n");
	}
	else{
		x=(float)(-b)/a;
		printf("Phuong trinh co nghiem x = %.2f",x);
	}
}
