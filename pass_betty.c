#include "shell.h"
/**
 * findMissingNumber - Find the missing number in an array
 * @nums: Array of integers
 * @n: Number of elements in the array
 * This function finds the missing number in the array of integers from 0 to n.
 * Return: it returns the missing number.
 */
int findMissingNumber(int nums[], int n)
{
	int expectedSum = n * (n + 1) / 2;
	int actualSum = 0;

	for (int i = 0; i < n; i++)
	{
		actualSum += nums[i];
	}
	return (expectedSum - actualSum);
}
