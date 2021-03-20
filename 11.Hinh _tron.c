#include <stdio.h>
#include <math.h>
float chu_vi(int r);
float dien_tich(int r);
float const pi=3.14;

void main(){
	int r;
	printf("Tinh chu vi, dien tich hinh tron\n");
	printf("Nhap ban kinh hinh tron r = ");scanf("%d",&r);
	printf("Chu vi hinh tron ban kinh %d C = %.2f\n",r,chu_vi(r));
	printf("Dien tich hinh tron ban kinh %d S = %.2f",r,dien_tich(r));
}

float chu_vi(int r){
	float result;
	result=2*pi*(float)r;
	return result;
}

float dien_tich(int r){
	float result;
	result=pi*(float)pow(r,2);
	return result;
}
