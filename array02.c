#include<stdio.h>
#define STUDENTS 5
int main()
{
	int score[STUDENTS], i, sum = 0;
	float avg;
	
	for(i=0; i<STUDENTS; i++)
	{
		printf("%d번의 학생 성적 입력 : ", i+1);
		scanf("%d", &score[i]);
		sum += score[i]; 
	}
	for(i=0; i<STUDENTS; i++)
		printf("%d번 학생의 성적 = %d\n", i+1, score[i]);
		
	printf("\n전체 학생들 점수의 합 = %d\n", sum);
	
	avg = (float)sum/STUDENTS;
	
	printf("\n 전체 학생들 점수의 평균 = %.2f\n", avg);
	
	return 0;
}
