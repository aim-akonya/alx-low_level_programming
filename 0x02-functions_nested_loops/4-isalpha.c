
/**
 * _isalpha - check the code
 * @c : character to check
 * Return: 1 is c is an alphabet, 0 otherwise
 */
int _isalpha(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
