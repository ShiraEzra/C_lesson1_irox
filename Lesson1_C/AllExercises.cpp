#include "AllExercises.h"

//Ex 23

//Number of bits in number
#define SIZE_NUMBER sizeof(int) * 3

int circularShift(unsigned n, int k, bool isLeftShift)
{
	if (isLeftShift) 
		return (n << k) | (n >> (SIZE_NUMBER - k));
	return (n >> k) | (n << (SIZE_NUMBER - k));
}

//Ex 24
int xorWithoutUsingOp(int num1, int num2)
{
	int first, second;
	first = num1 & (~num2);  //xy'
	second = (~num1) & num2; //x'y
	return first | second;

	//Their answer:
	/*first = num1 | num2;
	second = num1 & num2;
	return first - second;*/
}

//Ex 20
int swap(int n)
{
	return ((n & 0xAAAAAAAA) >> 1) | ((n & 0x55555555) << 1);
}

//Ex 41
int squreWithoutUsingMultOrDivOp(int n)
{
	int sum = 0, count=1;
	while (n>0)
	{
		sum += count;
		count += 2;
		n--;
	}
	return sum;
}

//Ex 47
int max(int x, int y)
{
	return x ^ ((x ^ y) & -(x < y));
}

int min(int x, int y) 
{
	return y ^ ((x ^ y) & -(x < y));
}
