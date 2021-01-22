//Khoi khai bao
#include<stdio.h>
void out(char str[]){
	int i;
	for (i=0;i<strlen(str);i++){
		putchar(str[i]);
	}
	putchar('\n');
}

void main(){
	out("abc");
	out("hehe");
	out("easy");
}
