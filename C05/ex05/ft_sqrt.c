int ft_sqrt(int nb)
{
	int root;

	root = 1;
	if (nb <= 0)
		return (0);
	while ((root * root) <= nb)
	{
		if (root * root == nb)
			return (root);
		root++;
	}
	return (0);
}
