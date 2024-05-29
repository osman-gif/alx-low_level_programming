#include "main.h"

int main(int __attribute__((unused)) argc,char __attribute__((unused)) **argv)
{
	long  int num1, num2;
	long int mul;

	num1 = strtoull(argv[1],argv, 10);
	num2 = strtoul(argv[2], argv, 10);
	mul = num1 * num2;
	printf("%ld\n", mul);

	return (0);
}
