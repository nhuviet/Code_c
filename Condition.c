#include <stdio.h>

void main(){
	/*if,else if ,else:
		*if (Logical Operators){
			code block,perform if: Logical Operators True
		}
		*else if (Logical Operators){
			code block,perform if: Logical Operators True and if is False
		}
		else{
			code block,perform if: if and else if is False
		}
	/*switch,case,default
		*switch(Operator){
			case (Value):
				code block, perform if: Operator == Value
				break;
			default:
				code block, perform if: case != Value
	*/
	if(10+5==7+8){//True
		printf("Bieu thuc dung: 10+5==7+8 \n");
	}	
			
	if(10+5==9+2){//False
		printf("Dong nay khong in\n");
	}
	else{
		printf("Bieu thuc sai: 10+5==9+2\n");
	}
	
	int n=10;
	switch (n){
		case 10:
			printf("n=%d\n",n);
			break;
		default:
			printf("n khac 10\n");
	}	
		
}
