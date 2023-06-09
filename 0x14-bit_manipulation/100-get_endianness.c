/**
 * get_endianness - the endianness of the machine
 * Return: returns an int
 */

int get_endianness(void)
{
	int n = 1;

	return (*((char *) &n) + '0');
}
