#include <stdio.h>

int findMin(int*a, int s);
void swap(int* a, int *b);
int gcd1(int a, int b);		//�ִ����� = Greatest Common Divisor 
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
	void *vp;			//�������� ���� �ּ�-> Ÿ�Ծ����Ƿ� +1�ϸ� �ּҰ�+1 
	
	//printf("%08x %08x\n",pa+1,pa);		//�ּҰ� Ȯ���Ҷ� 16������ ���� 
	//printf("%08x %08x\n",pa+1,pa++);	//pa�״�� ��� �� 1������ �ڿ� pa+1���
	//���� pa+1���� ������  pa+2 
	
	vp = pa++;
	printf("%08x",vp);	
	
	int arr[5];
	
	for(int i=0;i<5;i++){
		printf("%d��° ����: ",i+1);
		scanf("%d",arr+i);
	}
	
	printf("==> ���� ���� ��: %d\n", findMin(arr,5));
	
	int a= 1;
	int b= 2;
	swap(&a,&b);
	printf("%d %d",a,b);
	
	int a;
	int b;
	printf("�� ���� �Է��Ͻÿ�.\n");
	scanf("%d %d",&a, &b);
	
	printf("�ִ� ������� %d\n",gcd3(a,b));
	
	int arr1[100];
	
	printf("%d\n",getcd(a,arr1));
	
	for(int i=0;i<a;i++){
		printf("%d ",arr1[i]);
	}
	
	//printf("%d\n",gcd1(a,b));
	//printf("%d\n",gcd2(a,b));	
	*/
	
	struct pos p1 = {10,20};	//����ü �ʱ�ȭ ~ �迭 �ʱ�ȭ  
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
			//*arr++=i;		//�ִ� ����� �Ѱ��ֱ� ���� j�ʿ� 
		}
	}
	return j;		//j�� ����� �� 
} 

int gcd3(int a, int b){
	//int arr1[a+1];
	//int arr2[b+1];	
	bool arr1[a+1];		//���� a�� ����迭
	bool arr2[b+1];		//���� b�� ����迭
	int max; 
	
	findcd(a,arr1);		//�迭 ����� 
	findcd(b,arr2);
	
	if(a<b) max=a;		// ���� �� �� �ִ� ���� ū ��
	else max=b;
	
	for(int i=max;i>0;i--){
		if(arr1[i]&&arr2[i]){	//�� �迭�� ��� true�̸�  
			return i; 
		}
	}
	return -1;		//���� �ڵ� 
}

int findcd(int num, bool *arr){		//����num�� ����迭 ����� 
	for(int i=1;i<=num;i++){
		if(num%i==0) arr[i]=1;		//����̸� �迭�� 1(true)
		else arr[i]=0;		//�ƴϸ� 0 (false)
	}
}

int gcd2(int a, int b){
	int max, ans;
	
	if(a>b) max=b;		// ���� �� �� �ִ� ���� ū �� 
	else max=a;
	
	for(int i=max;i>0;i--){ 
		if(a%i==0 && b%i==0){
			ans=i;
			break;
		}
	}
	return ans;
}

int gcd1(int a, int b){		//��Ŭ���� ȣ���� 
	while(b!=0){
		int r=a%b;
		a=b;
		b=r;
	}
	return a;
} 

void swap(int *a, int *b){	//�ٲ� ��ġ(�ּ�) �־�� 
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
