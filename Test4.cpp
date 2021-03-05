#include <stdio.h>

int findMin(int*a, int s);
void swap(int* a, int *b);
int gcd1(int a, int b);		//최대공약수 = Greatest Common Divisor 
int gcd2(int a, int b);
int findcd(int num, bool *arr);
int gcd3(int a, int b);
int getcd(int num, int *arr);

struct pos{
	int x;
	int y;
}; 


int main(){
	/*
	int arr1[2][3]={1,2,3,4,5,6};
	int arr2[3][2]={1,2,3,4,5,6};
	
	printf("%d %d",(*(arr1+1))[0],(*(arr2+1))[0]);
	
	int a = 30;
	int* pa = &a;
	void *vp;			//정해지지 않은 주소-> 타입없으므로 +1하면 주소값+1 
	
	//printf("%08x %08x\n",pa+1,pa);		//주소값 확인할때 16진수가 편함 
	//printf("%08x %08x\n",pa+1,pa++);	//pa그대로 출력 후 1더해진 뒤에 pa+1출력
	//따라서 pa+1값은 원래의  pa+2 
	
	vp = pa++;
	printf("%08x",vp);	
	
	int arr[5];
	
	for(int i=0;i<5;i++){
		printf("%d번째 정수: ",i+1);
		scanf("%d",arr+i);
	}
	
	printf("==> 가장 작은 수: %d\n", findMin(arr,5));
	
	int a= 1;
	int b= 2;
	swap(&a,&b);
	printf("%d %d",a,b);
	
	int a;
	int b;
	printf("두 수를 입력하시오.\n");
	scanf("%d %d",&a, &b);
	
	printf("최대 공약수는 %d\n",gcd3(a,b));
	
	int arr1[100];
	
	printf("%d\n",getcd(a,arr1));
	
	for(int i=0;i<a;i++){
		printf("%d ",arr1[i]);
	}
	
	//printf("%d\n",gcd1(a,b));
	//printf("%d\n",gcd2(a,b));	
	*/
	
	struct pos p1 = {10,20};	//구조체 초기화 ~ 배열 초기화  
	printf("%d %d\n",p1.x, p1.y);
	struct pos *pp=&p1;
	printf("%d %d\n",(*pp).x,(*pp).y);
	printf("%d %d\n",pp->x,pp->y);
	
	
	
	return 0;
}

int getcd(int num, int *arr){
	int i,j;
	
	for(i=1,j=0;i<=num;i++){
		if(num%i==0){
			*(arr+j) =i;
			j++;
			//*arr++=i;		//최대 공약수 넘겨주기 위해 j필요 
		}
	}
	return j;		//j는 약수의 개 
} 

int gcd3(int a, int b){
	//int arr1[a+1];
	//int arr2[b+1];	
	bool arr1[a+1];		//숫자 a의 약수배열
	bool arr2[b+1];		//숫자 b의 약수배열
	int max; 
	
	findcd(a,arr1);		//배열 만들기 
	findcd(b,arr2);
	
	if(a<b) max=a;		// 답이 될 수 있는 가장 큰 값
	else max=b;
	
	for(int i=max;i>0;i--){
		if(arr1[i]&&arr2[i]){	//두 배열값 모두 true이면  
			return i; 
		}
	}
	return -1;		//오류 코드 
}

int findcd(int num, bool *arr){		//숫자num의 약수배열 만들기 
	for(int i=1;i<=num;i++){
		if(num%i==0) arr[i]=1;		//약수이면 배열값 1(true)
		else arr[i]=0;		//아니면 0 (false)
	}
}

int gcd2(int a, int b){
	int max, ans;
	
	if(a>b) max=b;		// 답이 될 수 있는 가장 큰 값 
	else max=a;
	
	for(int i=max;i>0;i--){ 
		if(a%i==0 && b%i==0){
			ans=i;
			break;
		}
	}
	return ans;
}

int gcd1(int a, int b){		//유클리드 호제법 
	while(b!=0){
		int r=a%b;
		a=b;
		b=r;
	}
	return a;
} 

void swap(int *a, int *b){	//바꿀 위치(주소) 넣어야 
	int temp = *a;
	*a = *b;
	*b = temp;
}

int findMin(int *a, int size){
	int min = *a;
	int val;
	
	for(int i=1;i<size;i++){
		//val = *(a+i);
		val = a[i];
		
		if(val<min) min=val;
		
	}
	return min;
}
