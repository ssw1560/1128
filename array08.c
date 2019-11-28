#include<stdio.h>
void abc(const int []);

int main()
{
	int a[]={1,2,3}, i;
	
	printf("%x\n", a);
	
	for(i=0; i<3; i++)
		printf("%d\n", a[i]);
		
	abc(a);
	
	for(i=0; i<3; i++)
		printf("%d\n", a[i]);
		
	return 0;
}

void abc(const int b[])
{
	printf("%x\n", b);
	b[2] = 200;
}
