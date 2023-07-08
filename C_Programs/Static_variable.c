/**
 * @brief C Program to illutrate Static Functionality
 * we have function fun with static variable
 * When calling fun second time the value of count does not resets 
 * static holds the value even after exiting function
 * Static is placed into data segment of memory
 */
#include <stdio.h>

// Function
int fun()
{
	static int count = 0;
	count++;                   // count = 1
	return count;              // 1
}

// Driver Code
int main()
{
	printf("%d ", fun());   // value of count --> 1
	printf("%d ", fun());   // value of count --> 2
	return 0;
}