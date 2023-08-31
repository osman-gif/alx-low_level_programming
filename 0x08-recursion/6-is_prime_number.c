/**
 * _prime - checks if a number is prime
 * @num: number to be checked
 * @prime: is = to (num - 1), which we divide the number num by it
 * Return: 1 if prime 0 otherwise
 */
int _prime(int num, int prime)
{
	if (num <= 0)
		return (0);
	if (num == 1)
		return (0);
	if (num == 2 || prime == 3)
		return (1);
	if (prime == 1)
		return (1);
	if ((num % prime) == 0)
		return (0);
	if ((num % prime) != 0)
		return (_prime(num, prime - 1));
	return (_prime(num, prime));
}
/**
 * is_prime_number - Returns 1 if the input number is prime 0 otherwise
 * @n: The input number
 * Return: Returns 1 if prime 0 otherwise
 */
int is_prime_number(int n)
{
	return (_prime(n, n - 1));
}
