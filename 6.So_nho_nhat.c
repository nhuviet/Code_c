#include <stdio.h>
int min_3(int a[]);

void main(){
	printf("Tim so nho nhat trong 3 so nguyen nhap tu ban phim\n");
	int i,a[3];
	for (i=0;i<3;i++){
		printf("Nhap so thu %d: ",i+1);scanf("%d",&a[i]);
	}
	printf("So nho nhat la %d",min_3(a));
	
}

int min_3(int a[]){
	int i,min=9999;
	for (i=0;i<3;i++){
		if (a[i]<min){
			min=a[i];
		}
	}
	return min;
}
