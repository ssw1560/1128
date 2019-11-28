#include<stdio.h>
#define STUDENTS 5
float get_average(int scr[], int n);
int main()
{
	int scores[STUDENTS]={100, 100, 90, 95, 88};
	float avg;
	
	avg = get_average(scores, STUDENTS);
	printf("ЦђБе = %.2f\n", avg);
	
	return 0;
}

float get_average(int scr[], int n)

{
	int i, sum = 0;
	for(i=0; i<n; i++)
		sum += scr[i];
		
	return (float)sum/n;
}
