#include "operations.h"
#include <stdlib.h>

/**
 * add - add function
 * @a: passed parameter 1
 * @b: passed parameter 2
 * Return: Always success 0
 */
int add(int a, int b)
{
return (a + b);
}

/**
 * sub - add function
 * @a: passed parameter 1
 * @b: passed parameter 2
 * Return: Always success 0
 */

int sub(int a, int b)
{
return (a - b);
}

/**
 * mul - add function
 * @a: passed parameter 1
 * @b: passed parameter 2
 * Return: Always success 0
 */

int mul(int a, int b)
{
return (a * b);
}

/**
 * div - add function
 * @a: passed parameter 1
 * @b: passed parameter 2
 * Return: Always success 0
 */
int div1(int a, int b)
{
if (b == 0)
{
return (0);
}
return (a / b);
}

/**
 * mod - add function
 * @a: passed parameter 1
 * @b: passed parameter 2
 * Return: Always success 0
 */
int mod(int a, int b)
{
if (b == 0)
{
return (0);
}
return (a % b);
}
