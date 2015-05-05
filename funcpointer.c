#include<stdio.h>

#define ADD	0
#define SUB	1
#define MUL	2

int funcAdd(int a, int b);
int funcSub(int a, int b);
int funcMul(int a, int b);

int main(){
	int (*func[])(int, int) = {funcAdd, funcSub, funcMul};

	printf(" 5 + 3 = %d\n", func[ADD](5,3));
	printf(" 5 - 3 = %d\n", func[SUB](5,3));
	printf(" 5 * 3 = %d\n", func[MUL](5,3));

	return 0;
}

int funcAdd(int a, int b){
	return a+b;
}
int funcSub(int a, int b){
	return a-b;
}
int funcMul(int a, int b){
	return a*b;
}

