/**
 * get_endianness - get the endianness
 * Return: something
 */

int get_endianness(void)
{
	int n = 1;

	return (*((char *) &n) + '0');
}
