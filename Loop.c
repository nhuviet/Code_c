#include <stdio.h>

void main(){
	/*For loop: 
		*for(start value loop ; condition loop ; re-value in loop){
			code block, perform if condition loop is True
		}
	*/
	int count;
	for (count=0;count<7;count++){
		//Vong lap chay tu 0->6 va in ra man hinh
		printf("for loop is %d\t",count);
	}
	
	/*While loop:
		*while(condition loop){
			code block, perform if condition loop is True
		}
	*/
	count=0;
	while (count<5){
		//vong lap chay tu 0 -> 4 va in ra man hinh
		printf("\nwhile loop is %d",count);
		count++;
	}
	/*Do...while loop:
		*Vong lap do...while luon thuc hien it nhat mot lan du dieu kien la sai
		*do{
			code block, perform if condition loop is True
		}while(condition loop);
	*/
	count=0;
	do{
		//vong lap duoc thuc hien lan dau du dieu kien vong lap la False
		printf("\ndo...while is %d",count);
		count++;
	}while(count==1);
	
	/*break,continue,exit:
		*break: dung vong lap ngay lap tuc
		*continue: quay tro lai tiep tuc vong lap, bo qua cau lenh sau continue
		*exit(value): thoat chuong trinh ngay lap tuc va tra ve gia tri value
	*/
	
	for(count=0;count<10;count++){
		if (count<5){
			printf("\ncount < 5");
			//continue bo qua dong printf ben duoi 
			continue;
		}
		//count > 5 vong lap thoat khoi dieu kien va in ra gia tri count
		printf("count = %d",count);
		if (count == 8){
			//vong lap chay den gia tri 8 se thoat vong lap 
			printf("\ncount = 8, quit loop ");
			break;
		}
	}
	
}
