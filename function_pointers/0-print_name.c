#include "function_pointers"
/**
 * print_name - prints entered name
 * @name: - input of name
 * @f: - pointer to function
 *
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
