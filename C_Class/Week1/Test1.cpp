#include <stdio.h>		//헤더 파일(header)

int main()	//본체(body) 
{
	//printf("hello world!\n");		//함수(function) -printf --> 시스템함수, 내부함수, output
	//scanf: 표준 입력 함수, input
	/*
	printf("case1: 줄바꿈\n hi\n");
	printf("case2: 줄바꿈,캐리지\n\r hi\n");
	printf("case3: 캐리지\r hi\n");
	
	int age = 12;
	printf("나이는 %d, 16진수로는 %x",age, age);
	
	int a = 123, b=130;
	printf("%-8d %-8d \n",a,b);
	printf("%d %d \n",a,b);
	
	float pi = 3.14159265;
	printf("%%f is %f \n",pi);
	printf("%%.8f is %.8f\n",pi);
	printf("%%8.2f is |%8.2f|\n",pi);
	*/
	
	printf("data type 별 byte수\n");
	printf("- char: %d byte \n", sizeof(char)); 
	printf("- int: %d byte \n", sizeof(int));
	printf("- long: %d byte \n", sizeof(long)); 
	printf("- float: %d byte \n", sizeof(float)); 
	printf("- double: %d byte \n", sizeof(double)); 
	
	return 0;
}
