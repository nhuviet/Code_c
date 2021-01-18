#include <stdio.h>

void main(){
	/*Mang mot chieu:
		*Khai bao:
			storage_class data_type	name[exp n]
		*Mang a kieu int co n phan tu:
			*int a[n]={ a[0] , a[1] , a[2] , a[3] , a[4] , .... , a[n-1] }
		*Chuoi la mang gom cac char
			*cuoi chuoi co escape sequence '\0' nen phai khai bao +1 so luong phan tu
			*char s[4]={'a','b','c'} ~ s[4]={"abc"} ~ s[4]="abc"
		*cac ham ho tro cho chuoi: thu vien <string.h>
			*strcpy(s1,s2): s1=s2 : chep s2 vao s1 (string copy)
			*strcat(s1,s2): s1+s2 : noi s2 vao s1 (string catch)
			*strlen(s1): chieu dai s1 (string length)
			*strcmp(s1,s2): 0 if (s1==s2); -1 if (s1<s2); 1 if (s1>s2)
			*strchr(s1,char): tra ve con tro den vi tri xuat hien dau tien cua char trong s1
			*strstr(s1,s2): tra ve con tro den vi tri xuat hien dau tien cua s2 trong s1
	/*Mang da chieu:
		*Khai bao:
			storage_class data_type	name [exp n-1][exp n][exp n+1]
		*Mang hai chieu a kieu int co m phan tu , moi phan tu gom n phan tu:
			*int a[m][n]={ a{a[0], a[1], ...a[n]} , a{a[0], a[1],...a[n]} ,..., a[m] }
		
	*/
	int ary[5]={1,2,3,4,5};
	printf("cac phan tu trong mang %d,%d,%d,%d,%d\n",ary[0],ary[1],ary[2],ary[3],ary[4]);
	
	char s[]="One Two Three";
	printf("mang string: %s\n",s);

	int ary2[2][3]={{1,2,3},{4,5,6}};
	int i,j;
	for (i=0;i<2;i++){
		for (j=0;j<3;j++){
			printf("Phan tu thu [%d],[%d]=%d\n",i,j,ary2[i][j]);
		}
	}
	
}
