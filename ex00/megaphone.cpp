#include <iostream>
#include <string>

std::string capitalizer(std::string str)
{
	int	len;
	int	i;

	len = str.length();
	i = -1;
	while (++i < len)
		str[i] = std::toupper(str[i]);
	return (str);
}

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	int i = 0;
	while (++i < ac)
		std::cout << capitalizer(av[i]);
	std::cout << std::endl;
	return (0);
}