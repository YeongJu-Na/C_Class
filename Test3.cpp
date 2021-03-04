#include <stdio.h>
#include <conio.h>

void func1(char c);			//prototype declare 
void ConvertChr(char buf[]);
void printChar(char buf[], int key);

int main(){
	/*
	char ch;
	
	while(1){
		printf("입력: ");
		scanf("%c",&ch);
		if(ch=='z') break;
		func1(ch);
		
	}
	
	char ch;
	bool flag=true;
	while(flag){
		printf("입력: ");
		scanf("%c",&ch);	//빈 버퍼에 새로운 입력 넣기 
		while(ch!=10){		//키보드 버퍼에 [Enter]를 만나기 전까지 
			if(ch=='z'){
				flag=false;
				break;
			}
			func1(ch);		//함수 실행 
			scanf("%c",&ch);		//다음 버퍼값(?) - 공백이었다면 추출후 나감 
		}
	}
	 
	char str[]="morning";			//원소 수 7 
	printf("%d\n",sizeof(str)/sizeof(str[0]));	// 배열 크기 8 = 문자길이(7) + 마지막 null 
	
	int arr[]={1,2,3,4,5,6,7};			//원소 수 7 
	printf("%d\n",sizeof(arr)/sizeof(arr[0]));	// 배열 크기 7
	arr[7]=20;			//배열 크기 밖의 인덱스로
	for(int i=0;i<8;i++){
		printf("%d ",arr[i]);		//arr[7]도 값 출력됨 
	} 
	printf("\n");
	printf("%d\n",sizeof(arr)/sizeof(arr[0]));	//배열 크기 7(즉 크기 밖의 인덱스 지정은 의미 없음 
	
	int test[3]={100};
	for(int i=0;i<3;i++){
		printf("%d ",test[i]);
	}
	
	char buf[1024];
	printf("문자열을 입력하시오: ");
	scanf("%s",buf);
	
	ConvertChr(buf); 
	
	int arr[3]={1,2,3};
	int arr1[2][3]={1,2,3,4,5,6};
	printf("1차원 행렬에서 *(arr+1)= %d\n",*(arr+1));
	printf("2차원 행렬에서 *(arr+1)= %d\n",*(arr1+1));
	*/
	
	char arr[1000];
	char ch;
	int idx;
		
	printf("문자열을 입력하시오: ");
	scanf("%s",arr);
	while(1){
		printf("숫자를 입력하시오\n");
		idx = getch()-49;		//숫자들의 ASCII코드값(48~57)을 숫자로 변환
		if(arr[idx]==0) break;
		printChar(arr,idx);
	}
	
	return 0;
}

void printChar(char buf[], int key){
	
	//printf("> %d번째 문자: %c",key+1,buf[key]);
	printf("%s (%d) --> %c\n", buf,key+1,*(buf+key));	//포인터로 해당위치의 값 표현 
}

void ConvertChr(char buf[]){// char *str -포인터 형태로 받아도 됨 
	
	printf("변환 후  문자열: ");
	for(int i=0;buf[i];i++){				//루프 실행 조건 -아래 break문과 같음 
		//if(buf[i]==0) break;			//입력의 끝을 만난 경우 
		printf("%c ",buf[i]&0xDF);	//소문자->대문자 +)대->소는 buf[i] | 0x20
	/*
		char temp=buf[i];
		if(temp>='a'&&temp<='z') printf("%c ",temp-32);
		else printf("%c ",temp);	
	*/	
	}
}

void func1(char c){
	if(c>='a'&&c<='z'){				   //a:97 z:122 
		printf(">%c : 소문자\n",c);
	}
	else if(c>=65&&c<=90){				//A: 65 Z: 90
		printf(">%c : 대문자\n",c);
	}
	else if(c>=48&&c<=57){				//0:48 9:57
		printf(">%c : 숫자\n",c);
	}
	else{
		printf(">%c : 특수문자\n",c);
	}
}
