/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 22:23:09 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/12/14 04:54:02 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctype.h>
#include <iomanip>
#include <sstream>
#include <limits>

int	check_str(std::string str)
{
	if (!str[0])
		return 0;
	int cp = 0, p = 0, d = 0;
	for (unsigned long i = 0; str[i]; i++)
	{
		if (!isprint(str[i]))
			return 2;
		if (isalpha(str[i]))
			cp += 1;
		if (isdigit(str[i]))
			d++;
		if (str[i] == '.')
			p++;
		if (str[i] == '.' && isalpha(str[i+1]))
			return 0;
	}
	if (str[0] == '.' && p == 1 && d)
		return 6;
	if (cp > 1 || (cp && d) || p > 1)
		return 4;
	if (cp == 1 && !d)
		return 5;
	if (p == 1 && str[str.size() - 1] == 'f')
		return 3;
	if (str.size() > 1 && !d)
		return 0;
	if (!cp && d)
		return 1;
	if (isprint(str[0]) && !str[1])
		return 5;
	return 10;
}

void	toChar(std::string str)
{
	int n;
	std::stringstream ss(str);
	ss >> n;
	if (n > std::numeric_limits<char>::max() || !str.compare("nan") || !str.compare("-inf") || !str.compare("-inff")
		|| !str.compare("+inf") || !str.compare("+inff"))
		std::cout << "char: impossible" << std::endl;
	else
	{
		if (check_str(str) == 5)
			std::cout << "char: '" << static_cast<char>(str[0]) << "'" << std::endl;
		else if (!isprint(n) || check_str(str) == 4)
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(n) << "'" << std::endl;
	}
}

void	toInt(std::string str)
{
	int	nbr;

	std::stringstream ss(str);
	ss >> nbr;
	if (!check_str(str) || check_str(str) == 4 || !str.compare("nan") || !str.compare("-inf") || !str.compare("-inff")
		|| !str.compare("+inf") || !str.compare("+inff"))
		std::cout << "int: impossible" << std::endl;
	else if (check_str(str) == 5)
		std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
	else
		std::cout << "int: " << static_cast<int>(nbr)  << std::endl;
}

void	to_float(std::string str)
{
	float	nbr;

	std::stringstream ss(str);
	ss >> nbr;
	// if (nbr > std::numeric_limits<float>::max())
	// {
	// 	std::cout << "float: " << "+inff" << std::endl;
	// 	return;
	// }
	// if (nbr < std::numeric_limits<float>::min())
	// {
	// 	std::cout << "float: " << "-inff" << std::endl;
	// 	return;
	// }
	if (!str.compare("-inf") || !str.compare("-inff")
		|| !str.compare("+inf") || !str.compare("+inff"))
	{
		std::cout << "float: " << str[0] << "inff" << std::endl;
		return;
	}
	if (!str.compare("nan"))
	{
		std::cout << "float: nanf" << std::endl;
		return;
	}
	if (!check_str(str) || check_str(str) == 4)
		std::cout << "float: impossible" << std::endl;
	else if (check_str(str) == 5)
	{
		std::cout << std::fixed << std::setprecision(1);
		std::cout << "float: " << static_cast<float>(str[0]) << "f" << std::endl;
	}
	else if (check_str(str) == 3)
	{
		str.erase(str.size() - 1, str.size());
		std::stringstream ss(str);
		ss >> nbr;
		std::cout << std::fixed << std::setprecision(1);
		std::cout << "float: " << static_cast<float>(nbr) << "f" << std::endl;
	}
	else if (check_str(str) == 1)
	{
		std::cout << std::fixed << std::setprecision(1);
		std::cout << "float: " << static_cast<float>(nbr) << "f" << std::endl;
	}
	else if (check_str(str) == 6)
	{
		std::string p = "0";
		p.append(str);
		if (p[p.size() - 1] == 'f')
			p.erase(p.size() - 1, p.size());
		std::stringstream ss(p);
		ss >> nbr;
		std::cout << "float: " << static_cast<float>(nbr) << "f" << std::endl;
	}
	// else
	// 	std::cout << "float: impossible" << std::endl;
}

void	toDouble(std::string str)
{
	double	nbr;

	std::stringstream ss(str);
	ss >> nbr;
	// if (nbr > std::numeric_limits<double>::max())
	// {
	// 	std::cout << "double: " << "+inf" << std::endl;
	// 	return;
	// }
	// if (nbr < std::numeric_limits<double>::min())
	// {
	// 	std::cout << "double: " << "-inf" << std::endl;
	// 	return;
	// }
	if (!str.compare("-inf") || !str.compare("-inff")
		|| !str.compare("+inf") || !str.compare("+inff"))
	{
		std::cout << "double: " << str[0] << "inf" << std::endl;
		return;
	}
	if (!str.compare("nan"))
	{
		std::cout << "double: nan" << std::endl;
		return;
	}
	if (!check_str(str) || check_str(str) == 4)
		std::cout << "double: impossible" << std::endl;
	else if (check_str(str) == 5)
	{
		std::cout << std::fixed << std::setprecision(1);
		std::cout << "double: " << static_cast<double>(str[0]) << std::endl;
	}
	else if (check_str(str) == 3)
	{
		str.erase(str.size() - 1, str.size());
		std::stringstream ss(str);
		ss >> nbr;
		std::cout << std::fixed << std::setprecision(1);
		std::cout << "double: " << static_cast<double>(nbr) << std::endl;
	}
	else if (check_str(str) == 1)
	{
		std::cout << std::fixed << std::setprecision(1);
		std::cout << "double: " << static_cast<double>(nbr) << std::endl;
	}
	else if (check_str(str) == 6)
	{
		std::string p = "0";
		p.append(str);
		if (p[p.size() - 1] == 'f')
			p.erase(p.size() - 1, p.size());
		std::stringstream ss(p);
		ss >> nbr;
		std::cout << "double: " << static_cast<double>(nbr) << std::endl;
	}
	// else
	// 	std::cout << "double: impossible" << std::endl;
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "please enter one argument !" << std::endl;
		return (0);
	}
	toChar(av[1]);
	toInt(av[1]);
	to_float(av[1]);
	toDouble(av[1]);
}
