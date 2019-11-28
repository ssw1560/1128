#include<stdio.h>
int main()
{
	int i,a[5] = {1,2,3,4,5};
	int b[5] = {7,6,5,4,3};
	
	for(i=0; i<5; i++)
		printf("a[%d] = %d\n", i, a[i]);
		
	for(i=0; i<5; i++)
		printf("b[%d] = %d\n", i, b[i]);
	
	//a = b; assignment to expression with array type ¿¡·¯ 
	
	for(i=0; i<5; i++)
		printf("a[%d] = %d\n", i, a[i]);
		
	for(i=0; i<5; i++)
		printf("b[%d] = %d\n", i, b[i]);
	
	return 0;
}
