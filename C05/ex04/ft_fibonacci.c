int ft_fibonacci(int index)
{
	int prev;
	int cur;
	int temp;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	prev = 0;
	cur = 1;
	while (index - 1)
	{
		temp = cur;
		cur = cur + prev;
		prev = temp;
		index--;
	}
	return (cur);
}
