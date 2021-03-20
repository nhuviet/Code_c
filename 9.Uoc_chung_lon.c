#include <stdio.h>
int gcd(int a, int b);

void main(){
	int a,b;
	printf("Tim uoc chung lon nhat cua 2 so nguyen\n");
	printf("Nhap so thu 1: ");scanf("%d",&a);
	printf("Nhap so thu 2: ");scanf("%d",&b);
	printf("Uoc chung lon nhat cua %d, %d la %d",a,b,gcd(a,b));
}

int gcd(int a,int b){
	int i,j,result=0;
	for(i=1, j=1; i<=a, j<=b; i++, j++){
		if (a%i==0 && b%j==0){
			result=i;
		}
	}
	return result;
}
