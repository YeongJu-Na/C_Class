#include <stdio.h>

int main(){
	/*
	int a, b;
	printf("%d",a);		//쓰레기값 
	a=214748356612;
	b=20;
	
	printf("a = %d\nb = %d\n",a,b);			//a-오버플로 발생 
	printf((a>5&&a<10)?"true":"false");
	
	float pi=3.14*5;			//5는 int에서 float으로 자동 형변환 
	printf("%f\n",pi);
	float res = (float)1/4;		//cast연산, 강제(명시적) 형변환-> 없을 시 0.000000 
	printf("%f",res);
	
	int a=1,b=10,res=0;
	int t=a;				//	a초기값미리 저장 필요  
	while(a<=b){
		res += a++;				// res=res+a보다 cpu클럭속도 덜 잡아먹음 
		printf("%d\n",res);
	}
	printf("while문을 이용한 누적 계산: %d\n",res); 
	
	int res=0;
	for(int i=1;i<=10;i++){
		res+=i;
		parent[i]=i;
	}
	printf("for문을 이용한 누적계산: %d\n",res);
	
	int a,b,res=0;
	
	printf("범위의 누적값 계산을 위한 두 수를 입력하시오: ");	//prompt 문? UI 
	scanf("%d %d",&a,&b);			//주소연산자& 
	for(int i=a;i<=b;i++){
		res+=i;
	}
	printf("hap from %d to %d= %d",a,b,res);
	//============================================================
	//홀수만 누적
	int a, b, res1=0,res2=0;
	
	printf("음이 아닌 두 수 입력: "); 
	scanf("%d%d",&a,&b);
	
	int start = a;
	if(a%2==0){	
		start++;
	}
	while(start<=b){
		res1+=start;
		start+=2;		//1씩 증가시켜 iteration도는 것보다 효율이 좋다
	}
	printf("짝수 합: %d\n",res1);
	
	start=a;
	if(a%2==1){
		start++;
	}
	for(int i=start;i<=b;i+=2){
		res2+=i;
	}
	printf("홀수 합: %d\n",res2);
	
	*/
	int key;
	while(1){
		printf("숫자를 입력하시오. 끝내려면 '0'키를 누르시오:\n");
		scanf("%d",&key);
		if(key==0) break;
		switch(key){    //if, elseif로 구현 시 모든 조건문 돌면서 각 값간에 delay발생 
			case 1:
				printf("One\n");
				break;
			case 2:
				printf("Two\n");
				break;
			case 3:
				printf("Three\n");
				break;
			case 4:
				printf("Four\n");
				break;
			case 5:
				printf("Five\n");
				break;
			case 6:
				printf("Six\n");
				break;
			case 7:
				printf("Seven\n");
				break;
			case 8:
				printf("Eight\n");
				break;
			case 9:
				printf("Nine\n");
				break;
			default:
				printf("수고하셨습니다.\n");
				break;
		}
	}
	
	
	
	return 0;
}
