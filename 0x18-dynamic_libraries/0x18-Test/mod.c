int mod(int a, int b)
{
	int mod;

	if (b == 0)
	{
		mod = a;

		return (mod);
	}
	else
	{
		mod = a % b;
		return (mod);
	}
}

