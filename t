
//Khoi khai bao
#include<stdio.h>/*
void Nhap_pt_mang(a[n]);
void Hien_thi_pt_mang(a[n]);
void Hien_thi_tong_chan(a[n]);
void Dem_chan_le_0(a[n]);*/
 //khoi ham main
int n;
int main(){

  printf("Nhap n = ");
  scanf("%d", &n);
  int a[n];
  Nhap_pt_mang(a[n]);
  Hien_thi_pt_mang(a[n]);
  Hien_thi_tong_chan(a);
  Dem_chan_le_0(a);
  return 0;
}

// khoi dinh nghia ham
void Nhap_pt_mang(int a[n]){
	int count,n;
	for (count=0;count<n;count++){
		printf("Nhap a[%d]= ");scanf("%d",&a[count]);
	}
}

void Hien_thi_pt_mang(int a[n]){
	int count;
	printf("mang a[");
	for (count=0;count<n;count++){
		printf(" %d ",a[count]);
	}
	printf("]\n");
}

void Hien_thi_tong_chan(int a[n]){
	int count,even_sum;
	for (count=0;count<n;count++){
		if (a[count]%2==0){
			even_sum+=a[count];
		}
	}
	printf("Tong cac so chan trong mang = %d\n",even_sum);
}

void Dem_chan_le_0(int a[n]){
	int count,count_even=0,count_odd=0;
	for (count=0;count<n;count++){
		if (a[count]%2==0){
			count_even+=1;
		}
		else{
			count_odd+=1;
		}
	}
}











#include <stdio.h>

void main(){
	lst[]={1,2,3}
	tong(lst);
}

void tong(int lst[]){
	int i;
	for 
}
