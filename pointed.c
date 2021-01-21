#include <stdio.h>

int main(){
	/*Con tro (Pointed):
		*Ly thuyet:
			*Moi bien, doi tuong, phan tu deu co mot dia chi, vung nho rieng.
			*Con tro la mot bien, chua dia chi cua bien khac.
		*Khai bao:
			* type *name
			* bien duoc goi la con tro khi co dau * trong phan khai bao
		*Toan tu voi con tro:
			* & va *:
				* &var tra ve gia tri la dia chi cua bien
				* *var tra ve gia tri cua bien luu tai dia chi cua var
			*Phep gan (=): ptr_var=&var gan dia chi var cho ptr_var
			*Phep toan so hoc:
				* ptr++,++ptr : tang tri cua ptr theo so byte kieu du lieu
				* ptr--,--ptr : giam tri cua ptr theo so byte kieu du lieu
				* ptr_var+i : Tro den so nguyen thu i sau var
				* ptr_var-i : Tro den so nguyen thu i truoc var
				* (*ptr_var)++ : tang tri cua var
				* *ptr_var++ :Tac dong den gia tri cua so nguyen ke tiep sau var
			*Phep toan  so sanh:
				* < , <= : be hon, be hon hoac bang
				* > , >= : lon hon, lon hon hoac bang
				* == , != : bang (giong), khong bang (khac)
				* ptr == NULL : true neu ptr gan gia tri NULL(0)
	/*Cap phat bo nho dong: malloc(), free(), calloc(), realloc().
		* pointed_name = malloc( size_of_array *sizeof(type))
			*Tao mot mang con tro voi kich thuoc size_of_array, cac phan tu thuoc kieu du lieu type
			*Ham malloc tra ve con tro chua dia chi vi tri bat dau vung nho duoc cap phat
	*/
	int var_1=7,*var_2;
	
	var_2=&var_1;
	printf("v_1=%u,andress:%u\n",var_1,&var_1);
	printf("v_2=%u,andress:%u\n",var_2,&var_2);
	printf("v_1=%u,andress:%u",*var_2,var_2);
	
	return 0;
}
