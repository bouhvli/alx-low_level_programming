/**
 * op_add - Makes the sum of two numbers
 * @c: First operand
 *
 * Description: function that checks for lowercase character.
 * Return: 1 if it's a lower case and 0 if not.
 */
int _islower(int c)
{
	char ch;

	if (ch >= 'A' && ch <= 'Z')
	{
		return (0);
	}
	else if (ch >= 'a' && ch <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
