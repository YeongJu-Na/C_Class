#include <stdio.h>
#include <conio.h>
void piano();

int main(){
	
	piano();
	return 0;
}
void piano(){
	char *str= "..........";
	char ch ='|';
	while(1){
		int idx=getch()-48;
		if(idx<0||idx>9) break;
		for(int i=0;i<10;i++){
			if(i==idx) printf("%c",ch);
			else printf("%c",*(str+i));
		}
		printf("\r");
	}
	
}
