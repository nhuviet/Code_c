#include <stdio.h>

int main(){
	//Khai bao cac kieu du lieu
	int i=10;		//So nguyen int
	float f=2.14;	//So thuc float,double
	char c='A';		//Ki tu char
	const float pi=3.14;	//Hang so int,float,...
	char str[4]="Faia";	//Chuoi string={'F','a','i','a'}
	int array_int[3]={1,2,3};	//Mang int,float
	char array_str[2][6]={"Faia","Kizuna"};//Mang chuoi string(mang 2 chieu)
	int doub_array[2][3]={{1,2,3},{4,5,6}};//Mang 2 chieu int
	/*Cac kieu du lieu khac: 
	*unsigned, signed char
	*unsigned int, signed int
	*short int, unsigned short int, signed short int
	*long int, unsigned long int, signed long int
	*float, double, long double
	*/
	
	printf("So nguyen i= %d",i);
	printf("\nSo thuc f= %.2f",f);
	printf("\nKi tu char c= %c",c);
	printf("\nHang so pi= %.2f",pi);
	printf("\nChuoi str= %s",str);
	printf("\nMang so nguyen [1]=%d, [2]=%d, [3]=%d",array_int[0],array_int[1],array_int[2]);
	printf("\nMang chuoi [1]= %s, [2]=%s",array_str[0],array_str[1]);
	return 0;
}
