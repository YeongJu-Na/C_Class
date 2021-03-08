#include <stdio.h>
#include "myHeader.h"	//<myHeader.h> 아님 
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
	
	//sorting : 데이터의 정렬
	//int arr[10]={1,3,5,7,9,2,4,6,8,0};
	int size;
	printf("배열의 크기를 입력하시오: ");
	scanf("%d",&size);
	int arr[size];
	printf("%d개의 숫자를 입력하시오: ");
	for(int i=0;i<size;i++) scanf("%d",arr+i);
	
	//sort1: 가장작은값 찾아서 0번째 요소와 swap -> 1번째 요소와  --- 
	sort1(arr,size);
	printf("정렬된 데이터: "); for(int i=0;i<size;i++) printf("%d ",arr[i]);
	
	//문자열 처리함수 
	char arr[]= "good morning";
	//printf("%d",sizeof(arr)); 
	//printf("%d",strlen(arr));
	char cp[strlen(arr)+1];
	strcpy(cp,arr);
	printf("%s\n",cp);
	printf("%s\n",strcat(arr,cp));
	printf("%s\n",arr);				//strcat후 arr(첫 번째 인자)로 합쳐짐 
	int x=strcmp(arr,cp);
	printf("%d",x); 
	
	int x=ChartoDecimal();
	printf("%d",x);
	
	//prompt 
	int r;
	int b=Prompt("입력하세요: ",&r);
	printf("%d",b);
	*/
	
	/*
	printf("문자열을 입력하시오: ");
	scanf("%s",str);				//공백 없는 문자열만 가능
	//공백 존재 시, 공백전까지가 문자열str에 들어가고, 찾을 문자인ch에 공백 다음 문자 대입됨 
	getchar();			//엔터삭제 
	printf("\n찾을 문자를 입력하시오: ");
	ch=getchar();
	
	res= chrPos(str,ch);
	if(res==-1) printf("해당 문자가 존재하지 않습니다.");
	else printf("%c의 위치는 %d입니다.",ch,res);
	
	printf("문자열을 입력하시오: ");
	fgets(str,256,stdin);
	printf("\n찾을 문자를 입력하시오: ");
	ch=getchar();
	printf("%c의 위치는 %d입니다.",ch,chrPos(str,ch));
	*/
	
	char *str= "abcdacd";
	char *s1 = "acd";
	int res=strPos(str,s1);
	
	printf("%d", res);
	
	
	return 0;
}

int strPos(char *str, char *s1){		//str에 있는 s1문자열의 위치 반환 
	
	int idx = 0;
	while(idx<strlen(str)){
		int p = chrPos(str+idx,*s1);
		if(p==-1) return -1;
		if(strncmp(str+p+idx,s1,strlen(s1))==0) return p+idx;
		else idx=p+idx+1;		//s1[0]으로 시작하는 위치이나 다른문자인경우 
	}
	/*
	for(int i=0;*(str+i);i+=p){
		int p = chrPos(str+i,*s1);		//str의 i부터 s1의 첫 문자 있는지 검사 
		//부분 문자열 str+i	--> i번째 인덱스부터 
		if(p==-1) return -1;	//첫 문자도 없는 경우 
		if(strncmp(str+p+i,s1,strlen(s1))==0) return p+i;	//해당 위치부터 s1길이까지 같은지 
	}*/
	return -1; 
} 


int chrPos(char *str, char chr){	//str내에서 chr인 문자의 위치 반환 
	
	int len = strlen(str);
	
	for(int i=0;i<len;i++){
		if(*(str+i)==chr){
			return i;
		}
	}
	return -1;
	/*
	int i;
	while(*(str+i)){		//문자열의 끝은 false 
		if(*(str+i++) ==chr) return i-1;
	}
	return -1;
	*/
} 

int Prompt(char* pt, int *ret){		// scanf로 받고 따로 변수 지정하는 과정 합치기 
	
	char buf[254]; 
	printf("%s",pt);
	
	fgets(buf,254,stdin);
	*ret = atoi(buf);
		
	return *ret;
} 

int ChartoDecimal(){		//문자열 입력받아 10진 정수로 반환 
	char str[100];
	printf("숫자를 입력하시오: "); 
	
	return atoi(fgets(str,100,stdin));	
}

int sort1(int *arr, int size){
	//여기서 arr크기 알기위해 sizeof(arr)/sizeof(arr[0])실행하면 주소의 크기인8/4가 됨
	
	for(int i=0;i<size-1;i++){	//배열의 비교대상 	
		for(int j=i+1;j<size;j++){			//배열의 나머지 
			if(*(arr+j)<*(arr+i)) swap(arr+i, arr+j);
		}
	}
	return 0;
}

void printAscii(int x){			//x칸으로 나눠서 ASCII코드표 출력하기
	int num, end;
	char arr1[]=" Dec Hx  Chr |", arr2[]="--------------";	//배열형태로 미리 만들지 않으면 경고뜸 
	strrepeat(x,arr1);
	strrepeat(x,arr2);
	end = 127/x+1;					//1칸의 줄 수 
	
	for(int i=0;i<end;i++){				//줄 (ROW)
		for(int j=0;j<x;j++){		//한 줄에 들어갈 개수(COL) 
			num=i+j*end;				//i줄 j칸 
			if(num>127) continue; 
			if((num>=7&&num<=10)|| num==13) printf("%3d %3x     | ",num,num);
			else printf("%3d %3x %3c | ",num,num,num);
		}
		printf("\n");
	}
}

void strrepeat(int a, char *arr){		//횟수 a만큼 문자열arr 반복하기  
	for(int i=0;i<a;i++){
		printf("%s",arr);
	}
	printf("\n");
}
