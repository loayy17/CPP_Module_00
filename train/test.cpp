#include <algorithm>
#include <iostream>
#include <vector>
#include <functional>
void	even_n(int &n)
{
	if (n % 2 == 0)
	{
		n *= 2;
	}
	else
	{
		n *= 3;
	}
}
void	print(std::string &str)
{
	str += "!";
}

int	main(void)
{
	typedef std::vector<int> intVector;
	typedef std::vector<std::string> stringVector;
    typedef std::pair<intVector::iterator, stringVector::iterator> p;

	int amounts[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    intVector array(amounts, amounts + sizeof(amounts) / sizeof(amounts[0]));
	
    std::string names[] = {"one", "two", "three", "four", "five", "six",
		"seven", "eight", "nine"};
        stringVector loay(names, names + sizeof(names) / sizeof(names[0]));
    // begin iterator
        stringVector::iterator start_string = loay.begin();
	// end iterator
        stringVector::iterator end_string = loay.end();
    // start iterator
	intVector::iterator start = array.begin();
	// end iterator
    intVector::iterator end = array.end();
	std::for_each(start_string, end_string, print);
	for (p it(start, start_string); it.first != end
		&& it.second != end_string; ++(it.first), ++(it.second))
	{
		std::cout << *it.first << " " << *it.second << " ";
	}
	return (0);
}