#include<stdio.h>
#include<conio.h>
#include<string.h>
int FindMax(int num[]);
int main()
{
	int number[5];
	int max;
	printf("number[1] : ");
	scanf_s("%d", &number[0]);
	printf("number[2] : ");
	scanf_s("%d", &number[1]);
	printf("number[3] : ");
	scanf_s("%d", &number[2]);
	printf("number[4] : ");
	scanf_s("%d", &number[3]);
	printf("number[5] : ");
	scanf_s("%d", &number[4]);
	max = FindMax(number);
	printf("Maximum number is %d\n", max);
}

int FindMax(int num[])
{
	int maximum, i = 0;
	maximum = num[i];
	for (i = 0; i < 5; i++)
	{
		if (num[i] > maximum)
			maximum = num[i];
	}
	return maximum;
}