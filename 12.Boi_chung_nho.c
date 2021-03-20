#include <stdio.h>
int lcm(int a, int b);

void main(){
	int a,b;
	printf("Tim boi chung nho nhat cua 2 so\n");
	printf("Nhap so thu 1: ");scanf("%d",&a);
	printf("Nhap so thu 2: ");scanf("%d",&b);
	printf("Boi chung nho nhat cua %d, %d la %d",a,b,lcm(a,b));
}

lcm(int a, int b){
	int i,result=0;
	for (i=1;i<9999;i++){
		if (i%a==0 && i%b==0){
			result=i;
			break;
		}
	}
	return result;
}
