#include<stdio.h>
#include<limits.h>
//�迭������ �ּҰ�, �ִ밪 ���ϱ� 
int main()
{
	int number[5], i, min = INT_MAX, max = INT_MIN;
	

	for(i=0; i<5; i++)
	{
		printf("�ټ��� �Է� �ϼ���[%d ��] : ", i+1);
		scanf("%d", &number[i]);
	}
	for(i=0; i<5; i++)
		printf("number[%d] = %d\n",i,number[i]);
		
	for(i=0; i<5; i++)
	{
		if(min > number[i])
			min = number[i];
		if(max < number[i])
			max = number[i];
	}
	
	printf("�迭������ �ּҰ� = %d, �ִ밪 = %d�Դϴ�.\n", min,max);
	
	
	
	
	return 0;
}
