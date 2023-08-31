#include <stddef.h>
/**
 * _sqrt - checks if a number has a natural square root
 * @num: The number to be checked
 * @root: The possible root
 * Return: Returns root if success -1 otherwise
 */
int _sqrt(size_t num, size_t root)
{
	if (!num || !root)
		return (-1);
	if ((root * root) < num && ((root + 1) * root) > num)
		return (-1);
	if ((root * root) > num && ((root - 1) * root) < num)
		return (-1);
	if (root * root == num)
		return (root);
	if ((root * root) > num)
		return (_sqrt(num, root / 2));
	if ((root * root) < num)
		return (_sqrt(num, ++root));
	if ((root * root) > num)
		return (_sqrt(num, --root));
	return (_sqrt(num, root));
}
/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number which natural square root will be returned
 * Return: Returns the square root of the number if it has one -1 otherwise
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, n));
}
