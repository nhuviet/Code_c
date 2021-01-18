#include <stdio.h>

void main(){
	/*Toan tu so hoc:
		*Toan tu mot ngoi: -(dau am), ++(tang tri), --(giam tri)
		*Toan tu hai ngoi: +(cong), -(tru), *(nhan), /(chia), %(chia lay du), ^(so mu)
	/*Toan tu gan: = 
		*ten bien = bieu thuc
	/*Toan tu quan he (toan tu so sanh):
		* > :lon hon, >= :lon hon hoac bang
		* <	:be hon, <= :be hon hoac bang
		* == :bang, !=: Khac(Khong bang)
	/* Toan tu luan ly:
		* && : And (va)
		* || : Or (hoac)
		* ! : Not (khac)
	/* Ep kieu du lieu:
		*(datatype) (Expression)
	*/
	int a = 10,b=5;
	float c=1.14;
	
	printf("Bieu thuc: a + b, ");
	printf(" a + b = %d\n",a+b);
	printf("_________\n");
	printf("Gan a=10, b=5\n");
	printf(" a == b : False\n");
	printf(" a != b && a == b : True And False = False \n");
	printf("Bien c thuoc kieu du lieu float ep thanh int: c=%d",(int) c);
}
