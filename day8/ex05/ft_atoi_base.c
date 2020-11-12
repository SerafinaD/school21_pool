#include <unistd.h>

int				ft_isvalid(char *str)
{
	if (ft_strlen(str) <= 1)
		return 0;
	while (*(str + 1))
	{
		if (ft_ischar(str + 1, *str, 'c'))
			return (0);
		str++;
	}
	
	
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int				ft_ischar(char *s1, char ch, char whatdo)
{
	if (whatdo == 'c')
		while (*s1 != '\0')
		{
			if (*s1 == ch)
				return (1);
			s1++;
		}
	else if (whatdo == 's')
	{
		if (ch == ' ' || ch == '\t' || ch == '\n' ||
		ch == '\v' || ch == '\f' || ch == '\r')
			return (1);
	}
	else if (whatdo == 'g')
	{
		if (ch == '+')
			return (1);
		else if (ch == '-')
			return (-1);
	}
	return (0);
}

int				ft_print_base(char *str, char *base, len)
{
	int	ans;
	int	i;
	int	basv;

	basv = strlen(base);
	i = 0;
	while (*str != base[i])
		i++;
	ans = i;
	while (basv >= 0)
	{
		ans *= ;
		
	}
	if(len >= 0)
		return (ans + ft_print_base(str, base, len--));
	return ans;	
}

int				ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	res;
	int	len

	sign = 0;
	res = 0;
	len = 0;
	if (!ft_isvalid(base))
		return (0);
	while (ft_ischar(str, *str, 's'))
		str++;
	while (ft_ischar(str, *str, 'g'))
	{
		if (ft_ischar(str, *str, 'g') < 0)
			sign++;
		str++;
	}
	if (ft_ischar(base, *str, 'c'))
	{
		while (ft_ischar(base, str[len], 'c'))
			len++;
		res = ft_print_base(str, base, len)
		str++;
	}
	return (sign % 2 == 1 ? -1 * res : res);
}
