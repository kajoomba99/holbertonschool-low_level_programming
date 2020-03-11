/**
 * print_name - print_name
 * @name: name
 * @f: f
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

