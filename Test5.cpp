#include <stdio.h>
#include "myHeader.h"	//<myHeader.h> �ƴ� 
#include <string.h>
#include <stdlib.h>

void printAscii(int x);
void strrepeat(int x, char *arr);
int sort1(int *arr, int size);
int ChartoDecimal();
int Prompt(char* pt, int *ret);
int chrPos(char *str, char chr);
int strPos(char *str, char *s1);

int main(){
	
	/*
	printAscii(4);
	
	//sorting : �������� ����
	//int arr[10]={1,3,5,7,9,2,4,6,8,0};
	int size;
	printf("�迭�� ũ�⸦ �Է��Ͻÿ�: ");
	scanf("%d",&size);
	int arr[size];
	printf("%d���� ���ڸ� �Է��Ͻÿ�: ");
	for(int i=0;i<size;i++) scanf("%d",arr+i);
	
	//sort1: ���������� ã�Ƽ� 0��° ��ҿ� swap -> 1��° ��ҿ�  --- 
	sort1(arr,size);
	printf("���ĵ� ������: "); for(int i=0;i<size;i++) printf("%d ",arr[i]);
	
	//���ڿ� ó���Լ� 
	char arr[]= "good morning";
	//printf("%d",sizeof(arr)); 
	//printf("%d",strlen(arr));
	char cp[strlen(arr)+1];
	strcpy(cp,arr);
	printf("%s\n",cp);
	printf("%s\n",strcat(arr,cp));
	printf("%s\n",arr);				//strcat�� arr(ù ��° ����)�� ������ 
	int x=strcmp(arr,cp);
	printf("%d",x); 
	
	int x=ChartoDecimal();
	printf("%d",x);
	
	//prompt 
	int r;
	int b=Prompt("�Է��ϼ���: ",&r);
	printf("%d",b);
	*/
	
	/*
	printf("���ڿ��� �Է��Ͻÿ�: ");
	scanf("%s",str);				//���� ���� ���ڿ��� ����
	//���� ���� ��, ������������ ���ڿ�str�� ����, ã�� ������ch�� ���� ���� ���� ���Ե� 
	getchar();			//���ͻ��� 
	printf("\nã�� ���ڸ� �Է��Ͻÿ�: ");
	ch=getchar();
	
	res= chrPos(str,ch);
	if(res==-1) printf("�ش� ���ڰ� �������� �ʽ��ϴ�.");
	else printf("%c�� ��ġ�� %d�Դϴ�.",ch,res);
	
	printf("���ڿ��� �Է��Ͻÿ�: ");
	fgets(str,256,stdin);
	printf("\nã�� ���ڸ� �Է��Ͻÿ�: ");
	ch=getchar();
	printf("%c�� ��ġ�� %d�Դϴ�.",ch,chrPos(str,ch));
	*/
	
	char *str= "abcdacd";
	char *s1 = "acd";
	int res=strPos(str,s1);
	
	printf("%d", res);
	
	
	return 0;
}

int strPos(char *str, char *s1){		//str�� �ִ� s1���ڿ��� ��ġ ��ȯ 
	
	int idx = 0;
	while(idx<strlen(str)){
		int p = chrPos(str+idx,*s1);
		if(p==-1) return -1;
		if(strncmp(str+p+idx,s1,strlen(s1))==0) return p+idx;
		else idx=p+idx+1;		//s1[0]���� �����ϴ� ��ġ�̳� �ٸ������ΰ�� 
	}
	/*
	for(int i=0;*(str+i);i+=p){
		int p = chrPos(str+i,*s1);		//str�� i���� s1�� ù ���� �ִ��� �˻� 
		//�κ� ���ڿ� str+i	--> i��° �ε������� 
		if(p==-1) return -1;	//ù ���ڵ� ���� ��� 
		if(strncmp(str+p+i,s1,strlen(s1))==0) return p+i;	//�ش� ��ġ���� s1���̱��� ������ 
	}*/
	return -1; 
} 


int chrPos(char *str, char chr){	//str������ chr�� ������ ��ġ ��ȯ 
	
	int len = strlen(str);
	
	for(int i=0;i<len;i++){
		if(*(str+i)==chr){
			return i;
		}
	}
	return -1;
	/*
	int i;
	while(*(str+i)){		//���ڿ��� ���� false 
		if(*(str+i++) ==chr) return i-1;
	}
	return -1;
	*/
} 

int Prompt(char* pt, int *ret){		// scanf�� �ް� ���� ���� �����ϴ� ���� ��ġ�� 
	
	char buf[254]; 
	printf("%s",pt);
	
	fgets(buf,254,stdin);
	*ret = atoi(buf);
		
	return *ret;
} 

int ChartoDecimal(){		//���ڿ� �Է¹޾� 10�� ������ ��ȯ 
	char str[100];
	printf("���ڸ� �Է��Ͻÿ�: "); 
	
	return atoi(fgets(str,100,stdin));	
}

int sort1(int *arr, int size){
	//���⼭ arrũ�� �˱����� sizeof(arr)/sizeof(arr[0])�����ϸ� �ּ��� ũ����8/4�� ��
	
	for(int i=0;i<size-1;i++){	//�迭�� �񱳴�� 	
		for(int j=i+1;j<size;j++){			//�迭�� ������ 
			if(*(arr+j)<*(arr+i)) swap(arr+i, arr+j);
		}
	}
	return 0;
}

void printAscii(int x){			//xĭ���� ������ ASCII�ڵ�ǥ ����ϱ�
	int num, end;
	char arr1[]=" Dec Hx  Chr |", arr2[]="--------------";	//�迭���·� �̸� ������ ������ ���� 
	strrepeat(x,arr1);
	strrepeat(x,arr2);
	end = 127/x+1;					//1ĭ�� �� �� 
	
	for(int i=0;i<end;i++){				//�� (ROW)
		for(int j=0;j<x;j++){		//�� �ٿ� �� ����(COL) 
			num=i+j*end;				//i�� jĭ 
			if(num>127) continue; 
			if((num>=7&&num<=10)|| num==13) printf("%3d %3x     | ",num,num);
			else printf("%3d %3x %3c | ",num,num,num);
		}
		printf("\n");
	}
}

void strrepeat(int a, char *arr){		//Ƚ�� a��ŭ ���ڿ�arr �ݺ��ϱ�  
	for(int i=0;i<a;i++){
		printf("%s",arr);
	}
	printf("\n");
}
