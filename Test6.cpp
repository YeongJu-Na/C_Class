#include <stdio.h>
#include <io.h>
#include <malloc.h>
#include <stdlib.h>

#define pNum 100	//프로그램 유지 보수 위함 

int main(){
	/*
	FILE *fp = fopen("test.txt","r");
	//fopen("D:\\C_Class\\Week2\\test.ext","ab");
	//경로 넣을 시, 백슬래시는 인식하려면 한번씩 더 써야

	char str[100];
	while(!feof(fp)){
		fscanf(fp,"%s",str);
		printf("%s",str);
	}
	fclose(fp);
	*/
	
	FILE *fp = fopen("test6.txt","rb");
	//int pNum=100; 		//프로그램 유지보수 위해 
	int *eng, *kor, *san;
	int i,k,num,sum,avg;
	//char **name;
	
	eng = (int*)malloc(pNum* sizeof(int));   //100명분의 데이터 보관 가능
	kor = (int*)malloc(pNum* sizeof(int));
	san = (int*)malloc(pNum* sizeof(int));
	//name =(char**)malloc(pNum*10);		//한사람당 열글자 
	 
	for(i=0;i<pNum;i++){
		
		k = fscanf(fp,"%d %d %d",kor+i,eng+i,san+i);
		//k==정상적으로 읽은 개수 --> 3이어야함 ==> 이를 통해 파일의 끝 확인 가능
		if(k!=3) break;
	}
	num = i;//for문 끝나고 나서 i값은 데이터의 개수 
	for(i=0;i<num;i++){
		printf("%d %d %d\n",*(kor+i),*(san+i),*(eng+i)); 
	}
	
	
	
	
	fclose(fp);
	
	return 0;
}
