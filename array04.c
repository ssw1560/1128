#include<stdio.h>

int main()
{
	int i, score[5];
	
	printf("int 타입의 메모리 크기 = %d\n", sizeof(int));
	printf("int 형 변수의 메모리 크기 = %d\n", sizeof(i));
	printf("int형 배열 원소의 메모리 크기 = %d\n", sizeof(score[0]));
	printf("int형 배열의  메모리 크기 = %d\n", sizeof(score));
	printf("score 배열 원소의 개수 = %d\n", sizeof(score)/sizeof(score[0]));
	
	return 0;
}
