#include<stdio.h>

void swap(int, int);
void swap2(int *, int *);

int main()
{
	
	int a = 3, b= 6;
	printf("a = %d, b = %d\n", a, b);
	swap(a, b); // call by value
	printf("a = %d, b = %d\n", a, b);
	swap(&a, &b); // call by reference
	printf("a = %d, b = %d\n", a, b);
	
	return 0;
}

void swap(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void swap2(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	
}
