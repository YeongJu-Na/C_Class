#include <stdio.h>
#include <conio.h>

void func1(char c);			//prototype declare 
void ConvertChr(char buf[]);
void printChar(char buf[], int key);

int main(){
	/*
	char ch;
	
	while(1){
		printf("�Է�: ");
		scanf("%c",&ch);
		if(ch=='z') break;
		func1(ch);
		
	}
	
	char ch;
	bool flag=true;
	while(flag){
		printf("�Է�: ");
		scanf("%c",&ch);	//�� ���ۿ� ���ο� �Է� �ֱ� 
		while(ch!=10){		//Ű���� ���ۿ� [Enter]�� ������ ������ 
			if(ch=='z'){
				flag=false;
				break;
			}
			func1(ch);		//�Լ� ���� 
			scanf("%c",&ch);		//���� ���۰�(?) - �����̾��ٸ� ������ ���� 
		}
	}
	 
	char str[]="morning";			//���� �� 7 
	printf("%d\n",sizeof(str)/sizeof(str[0]));	// �迭 ũ�� 8 = ���ڱ���(7) + ������ null 
	
	int arr[]={1,2,3,4,5,6,7};			//���� �� 7 
	printf("%d\n",sizeof(arr)/sizeof(arr[0]));	// �迭 ũ�� 7
	arr[7]=20;			//�迭 ũ�� ���� �ε�����
	for(int i=0;i<8;i++){
		printf("%d ",arr[i]);		//arr[7]�� �� ��µ� 
	} 
	printf("\n");
	printf("%d\n",sizeof(arr)/sizeof(arr[0]));	//�迭 ũ�� 7(�� ũ�� ���� �ε��� ������ �ǹ� ���� 
	
	int test[3]={100};
	for(int i=0;i<3;i++){
		printf("%d ",test[i]);
	}
	
	char buf[1024];
	printf("���ڿ��� �Է��Ͻÿ�: ");
	scanf("%s",buf);
	
	ConvertChr(buf); 
	
	int arr[3]={1,2,3};
	int arr1[2][3]={1,2,3,4,5,6};
	printf("1���� ��Ŀ��� *(arr+1)= %d\n",*(arr+1));
	printf("2���� ��Ŀ��� *(arr+1)= %d\n",*(arr1+1));
	*/
	
	char arr[1000];
	char ch;
	int idx;
		
	printf("���ڿ��� �Է��Ͻÿ�: ");
	scanf("%s",arr);
	while(1){
		printf("���ڸ� �Է��Ͻÿ�\n");
		idx = getch()-49;		//���ڵ��� ASCII�ڵ尪(48~57)�� ���ڷ� ��ȯ
		if(arr[idx]==0) break;
		printChar(arr,idx);
	}
	
	return 0;
}

void printChar(char buf[], int key){
	
	//printf("> %d��° ����: %c",key+1,buf[key]);
	printf("%s (%d) --> %c\n", buf,key+1,*(buf+key));	//�����ͷ� �ش���ġ�� �� ǥ�� 
}

void ConvertChr(char buf[]){// char *str -������ ���·� �޾Ƶ� �� 
	
	printf("��ȯ ��  ���ڿ�: ");
	for(int i=0;buf[i];i++){				//���� ���� ���� -�Ʒ� break���� ���� 
		//if(buf[i]==0) break;			//�Է��� ���� ���� ��� 
		printf("%c ",buf[i]&0xDF);	//�ҹ���->�빮�� +)��->�Ҵ� buf[i] | 0x20
	/*
		char temp=buf[i];
		if(temp>='a'&&temp<='z') printf("%c ",temp-32);
		else printf("%c ",temp);	
	*/	
	}
}

void func1(char c){
	if(c>='a'&&c<='z'){				   //a:97 z:122 
		printf(">%c : �ҹ���\n",c);
	}
	else if(c>=65&&c<=90){				//A: 65 Z: 90
		printf(">%c : �빮��\n",c);
	}
	else if(c>=48&&c<=57){				//0:48 9:57
		printf(">%c : ����\n",c);
	}
	else{
		printf(">%c : Ư������\n",c);
	}
}
