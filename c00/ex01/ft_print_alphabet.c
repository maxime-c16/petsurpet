#include <unistd.h>

void	ft_priunt_alphabet(void)
{
	char	c;

	c = a;
	while (c <= 'z')
	{
		write(1, &c, 1);
		c++;
	}
	return ;
}
