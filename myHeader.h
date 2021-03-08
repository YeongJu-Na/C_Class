void swap(int *a, int *b);

void swap(int *a, int *b){	//call by reference 
	int c = *a;
	*a=*b;
	*b=c;
}
