#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,average;
	int sum; 
	int grade[SIZE];
	sum=0;
	
	printf("5���� ������ �Է��ϼ���\n");
	
	for(i=0;i<SIZE;i++)
	{
	
		printf("�л�%i�� ������ �Է��ϼ��� :",i+1);
		scanf("%d",&grade[i]);
		sum+=grade[i];
	}
	
	
	average = sum/SIZE;
	printf("���� ��� : %d\n",average);
	
	return 0;
}
