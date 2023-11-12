#include "shell.h"
/**
 * main - test
 * n: number
 * nums: number
 * missingNumber: number
 * Return: 0
 */
int main(void)
{
	int nums[] = {3, 0, 1};
	int n = sizeof(nums) / sizeof(nums[0]);

	for (int i = 0; i < n; i++)
	{
		printf("Enter number %d: ", i + 1);
		scanf("%d", &nums[i]);
	}
	int missingNumber = findMissingNumber(nums, n);

	printf("The missing number is: %d\n", missingNumber);

	return (0);
}
