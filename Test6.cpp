#include <stdio.h>
#include <io.h>
#include <malloc.h>
#include <stdlib.h>

#define pNum 100	//���α׷� ���� ���� ���� 

int main(){
	/*
	FILE *fp = fopen("test.txt","r");
	//fopen("D:\\C_Class\\Week2\\test.ext","ab");
	//��� ���� ��, �齽���ô� �ν��Ϸ��� �ѹ��� �� ���

	char str[100];
	while(!feof(fp)){
		fscanf(fp,"%s",str);
		printf("%s",str);
	}
	fclose(fp);
	*/
	
	FILE *fp = fopen("test6.txt","rb");
	//int pNum=100; 		//���α׷� �������� ���� 
	int *eng, *kor, *san;
	int i,k,num,sum,avg;
	//char **name;
	
	eng = (int*)malloc(pNum* sizeof(int));   //100����� ������ ���� ����
	kor = (int*)malloc(pNum* sizeof(int));
	san = (int*)malloc(pNum* sizeof(int));
	//name =(char**)malloc(pNum*10);		//�ѻ���� ������ 
	 
	for(i=0;i<pNum;i++){
		
		k = fscanf(fp,"%d %d %d",kor+i,eng+i,san+i);
		//k==���������� ���� ���� --> 3�̾���� ==> �̸� ���� ������ �� Ȯ�� ����
		if(k!=3) break;
	}
	num = i;//for�� ������ ���� i���� �������� ���� 
	for(i=0;i<num;i++){
		printf("%d %d %d\n",*(kor+i),*(san+i),*(eng+i)); 
	}
	
	
	
	
	fclose(fp);
	
	return 0;
}
