#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>



struct people
{
	char name[5];
	int age;

};

void main() {
	int x = 0, temp = 0;
	struct people p[5] = {0};
	

	for (int i = 0;i < 5;i++) {
		printf("%d번째 학생 이름과 나이를 입력해주세요: ", i + 1);
		scanf("%s %d", &p[i].name, &p[i].age);
		printf("\n");
	}

	x = p[0].age;
	for (int i = 0; i < 5; i++) {
			if (p[i].age < x) {
				x = p[i].age;
				temp = i;
			}
		}
		printf("\n\n%s %d", p[temp].name, p[temp].age);

}


	/*
	int* arr;
	int n, i;
	int sum=0;
	float avg=0;

	printf("배열의 크기를 입력하세요:");
	scanf_s("%d", &n);

	arr = (int*)malloc(sizeof(int) * n);

	for (i = 0;i < n;i++) scanf_s("%d", &arr[i]);
	printf("\n");
	for (i = 0;i < n;i++)
	{
		printf("%d ", arr[i]);
		
		sum += arr[i];
		avg = sum / n;
	}
	printf("\n합:%d ,평균은: %.2f\n", sum, avg);
	
	free(arr);
	
}
*/