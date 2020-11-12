char	*ft_realloc(char *src, int size)
{
	char	*newsrc
	int		i;

	newsrc = (char*)malloc(size);
	i = 0;
	while (i < size)
		newsrc[i] = src[i];
	free(src);
	return (newsrc);
}