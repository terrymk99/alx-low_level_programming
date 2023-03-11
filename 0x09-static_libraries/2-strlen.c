/**
 * _strlen - Returns string length
 * @s: String pointer
 *
 * Return: The length of @s
 */
int _strlen(char *s)
{
	int i = 0;
	char c = s[0];

	while (c != '\0')
	{
		i++;
		c = s[i];
	}

	return (i);
}
