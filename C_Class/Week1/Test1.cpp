#include <stdio.h>		//��� ����(header)

int main()	//��ü(body) 
{
	//printf("hello world!\n");		//�Լ�(function) -printf --> �ý����Լ�, �����Լ�, output
	//scanf: ǥ�� �Է� �Լ�, input
	/*
	printf("case1: �ٹٲ�\n hi\n");
	printf("case2: �ٹٲ�,ĳ����\n\r hi\n");
	printf("case3: ĳ����\r hi\n");
	
	int age = 12;
	printf("���̴� %d, 16�����δ� %x",age, age);
	
	int a = 123, b=130;
	printf("%-8d %-8d \n",a,b);
	printf("%d %d \n",a,b);
	
	float pi = 3.14159265;
	printf("%%f is %f \n",pi);
	printf("%%.8f is %.8f\n",pi);
	printf("%%8.2f is |%8.2f|\n",pi);
	*/
	
	printf("data type �� byte��\n");
	printf("- char: %d byte \n", sizeof(char)); 
	printf("- int: %d byte \n", sizeof(int));
	printf("- long: %d byte \n", sizeof(long)); 
	printf("- float: %d byte \n", sizeof(float)); 
	printf("- double: %d byte \n", sizeof(double)); 
	
	return 0;
}
