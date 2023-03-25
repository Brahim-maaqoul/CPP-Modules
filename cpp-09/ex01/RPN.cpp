/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 22:10:52 by bmaaqoul          #+#    #+#             */
/*   Updated: 2023/03/25 03:00:56 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void	printError(void)
{
	std::cout << "Error\n";
	exit(1);
}

std::string trimSpace(std::string str)
{
    size_t start = str.find_first_not_of(" ");
    if (start != std::string::npos)
        str = str.substr(start);
    size_t end = str.find_last_not_of(" ");
    if (end != std::string::npos)
        str = str.substr(0, end + 1);
    return str;
}

int	check_str(std::string str)
{
	size_t	pos = str.find_first_not_of("0123456789+-/* ");
	if (pos != std::string::npos)
		return 0;
	str = trimSpace(str);
	return 1;
}

void	calculate(std::stack<int>&s, std::string op)
{
	int result = 0, a = 0, b = 0;
	
	if (s.size() < 2)
		printError();
	a = s.top();
	s.pop();
	b = s.top();
	s.pop();
	if (op == "+")
		result = b + a;
	else if (op == "-")
		result = b - a;
	else if (op == "*")
		result = b * a;
	else if (op == "/")
	{
		if (a == 0)
			printError();
		result = b / a;
	}
	s.push(result);
}

int count_delimiter(std::string str, char c)
{
    int cp = 0;
    for (size_t i = 0; i < str.length(); i++)
    {
        if (str[i] == c)
            cp++;
    }
    return cp;
}

void	rpn(std::string str)
{
	if (!check_str(str))
	{
		std::cout << "Error\n";
		return;
	}
	std::stack<int>s;
	std::string n;
	std::stringstream s1(str);
	while (s1 >> n)
	{
		if (std::atoi(n.c_str()) >= 10)
			printError();
		if (count_delimiter(n, '+') > 1 ||  count_delimiter(n, '-') > 1|| count_delimiter(n, '*') > 1 || count_delimiter(n, '/') > 1)
			printError();
		if (n == "+" || n == "-" || n == "*" || n == "/")
			calculate(s, n);
		else if (!std::atoi(n.c_str()) || std::atoi(n.c_str()) < 10)
			s.push(std::atoi(n.c_str()));
	}
	if (s.size() != 1)
		printError();
	else
		std::cout << s.top() << std::endl;
}