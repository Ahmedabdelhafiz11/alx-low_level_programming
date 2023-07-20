#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns sum of all paramters.
 * @n: The number of paramters passed to a function.
 * @...: A variable number of paramters to calculate sum.
 *
 * Return: If n == 0 - 0. else - the sum of all parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int index, sum = 0;

	va_start(nums, n);

	for (index = 0; index < n; index++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
