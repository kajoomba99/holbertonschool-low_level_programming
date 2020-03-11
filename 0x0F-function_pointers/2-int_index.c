/**
 * int_index - int_index
 * @array: array
 * @size: size
 * @cmp: cmp
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, rv = -1;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				rv = i;
				break;
			}
		}
	}
	return (rv);
}
