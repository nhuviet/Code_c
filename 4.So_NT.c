#include <stdio.h>

void main(){
	int n,i;
	printf("Nhap so can kiem tra: ");scanf("%d",&n);
	
	int check=0;
	for(i=1;i<=n;i++){
		if (n%i==0){
			check+=1;
		}
	}
	if (check == 2){
		printf("%d la so nguyen to",n);
	}
	else{
		printf("%d khong phai la so nguyen to",n);
	}
}

