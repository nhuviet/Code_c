//tap tin tieu de nhap xuat std 
#include <stdio.h>

void main(){
	/*Ham printf() :printf("control string",argument list)
		*Control string bao gom: Text, Format Command, Escape Sequence
		*format command:
			* %c : Ki tu
			* %s : Chuoi
			* %d : So nguyen
			* %f,%e,%lf,%g : So thuc
			* %u : So nguyen khong dau
			* %x : So thap luc phan
			* %o : So bat phan
		*escape sequence:
			* \n : New Line
			* \b : Backspace
			* \f : Form Feed
			* \a : Alam or Beep
			* \r : Carriage Return
			* \t : Tab
			* \v : Vertical Tap
			* \\ : Backslash (\)
			* \' , \" : Singer,Double Quote (' , ")
			* \? : Question Mark (?)
			* %% : Percent Mark (%)
			* \ooo : octal number
			* \xhh : hexadecimal number
			* \0 : Null
	/*Ham scanf() :scanf("format command",address of variable)
	/*Ham putchar(),getchar():
		*putchar('char') :Xuat mot ki tu ra man hinh
		*getchar() :Nhap mot ki tu tu ban phim
	*/
	
	printf("Number int: %d\n",555);
	printf("Number Float: %f\n",3.14);
	printf("String: %s\n","This is string");
	
	int n;
	printf("Nhap n: ");scanf("%d",&n);
}
