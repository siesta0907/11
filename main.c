#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	int grade[5];
	int *ptr;
	ptr= grade;
	
	int sum;
	double avg;
	
	for (i=0;i<5;i++){
		printf("input grade[%i] = ", i);
		scanf("%d", &grade[i]);
	}
	
	i =0;
	while(*ptr){
		printf("grade[%d] = %d\n", i, *ptr);
		sum += *ptr;
		ptr ++;
		i ++;
	}
	avg = sum/5.0;
	printf("average: %.2lf\n", avg);
	return 0;
}
