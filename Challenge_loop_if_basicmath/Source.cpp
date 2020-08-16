#include<stdio.h>
#include<math.h>
int main()
{
	int num1,num2,i;

	printf("Enter num1 :");
	scanf_s("%d", &num1);
	printf("Enter num2 :");
	scanf_s("%d", &num2);
	if (num1 < num2)
	{
		for (i = num1; i <= num2; i++)
		{
			printf("%d ", i);
		}
		int i;
		float sum = 0;
		for (i = num1; i <= num2; i++)
		{
			sum = sum + i;
		}
		float xbar = sum / ((num2 - num1) + 1);
		printf("\nAverage = %.1f", xbar);

		float sum2 = 0;
		for (i = num1; i <= num2; i++)
		{
			sum2 = sum2 + pow((i - xbar), 2);
		}
		float sd = sqrt(sum2 / (num2 - num1));
		printf("\nSD = %.2f", sd);
	}
	if (num1 > num2)
	{
		for (i = num1; i >= num2; i--)
		{
			printf("%d ", i);
		}
		int i;
		float sum = 0;
		for (i = num1; i >= num2; i--)
		{
			sum = sum + i;
		}
		float xbar = sum / ((num1 - num2) + 1);
		printf("\nAverage = %.1f", xbar);

		float sum2 = 0;
		for (i = num1; i >= num2; i--)
		{
			sum2 = sum2 + pow((i - xbar), 2);
		}
		float sd = sqrt(sum2 / (num1 - num2));
		printf("\nSD = %.2f", sd);

	}
	if (num1 == num2)
	{
		printf("%d", num1);
		printf("\nAverage = %d", num1);
		printf("\nSD = 0");
	}
	return 0;


}