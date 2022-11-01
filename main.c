#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int i;
	int avg,sum;
	int grade[SIZE];
	
	sum=0;
	
	for(i=0;i<5;i++){
	    printf("5명의 점수를 입력하세요.");
		scanf("%d", &grade[i]);
		sum+=grade[i];
    }

	avg=sum/SIZE;
	printf("성적 평균: %d\n", avg);
	
	return 0;
}
