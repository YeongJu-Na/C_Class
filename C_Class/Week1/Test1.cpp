#include <stdio.h>

int main(){
	/*
	int a, b;
	printf("%d",a);		//�����Ⱚ 
	a=214748356612;
	b=20;
	
	printf("a = %d\nb = %d\n",a,b);			//a-�����÷� �߻� 
	printf((a>5&&a<10)?"true":"false");
	
	float pi=3.14*5;			//5�� int���� float���� �ڵ� ����ȯ 
	printf("%f\n",pi);
	float res = (float)1/4;		//cast����, ����(�����) ����ȯ-> ���� �� 0.000000 
	printf("%f",res);
	
	int a=1,b=10,res=0;
	int t=a;				//	a�ʱⰪ�̸� ���� �ʿ�  
	while(a<=b){
		res += a++;				// res=res+a���� cpuŬ���ӵ� �� ��Ƹ��� 
		printf("%d\n",res);
	}
	printf("while���� �̿��� ���� ���: %d\n",res); 
	
	int res=0;
	for(int i=1;i<=10;i++){
		res+=i;
		parent[i]=i;
	}
	printf("for���� �̿��� �������: %d\n",res);
	
	int a,b,res=0;
	
	printf("������ ������ ����� ���� �� ���� �Է��Ͻÿ�: ");	//prompt ��? UI 
	scanf("%d %d",&a,&b);			//�ּҿ�����& 
	for(int i=a;i<=b;i++){
		res+=i;
	}
	printf("hap from %d to %d= %d",a,b,res);
	//============================================================
	//Ȧ���� ����
	int a, b, res1=0,res2=0;
	
	printf("���� �ƴ� �� �� �Է�: "); 
	scanf("%d%d",&a,&b);
	
	int start = a;
	if(a%2==0){	
		start++;
	}
	while(start<=b){
		res1+=start;
		start+=2;		//1�� �������� iteration���� �ͺ��� ȿ���� ����
	}
	printf("¦�� ��: %d\n",res1);
	
	start=a;
	if(a%2==1){
		start++;
	}
	for(int i=start;i<=b;i+=2){
		res2+=i;
	}
	printf("Ȧ�� ��: %d\n",res2);
	
	*/
	int key;
	while(1){
		printf("���ڸ� �Է��Ͻÿ�. �������� '0'Ű�� �����ÿ�:\n");
		scanf("%d",&key);
		if(key==0) break;
		switch(key){    //if, elseif�� ���� �� ��� ���ǹ� ���鼭 �� ������ delay�߻� 
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
				printf("�����ϼ̽��ϴ�.\n");
				break;
		}
	}
	
	
	
	return 0;
}
