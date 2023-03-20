/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:02:56 by bmaaqoul          #+#    #+#             */
/*   Updated: 2023/03/20 03:45:41 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

struct	tm	take_date(std::string date)
{
	struct tm tm;
    int d, m, y;
	memset(&tm, 0, sizeof(struct tm));
    if (strptime(date.c_str(), "%Y-%m-%d", &tm))
    {
        d = tm.tm_mday;
        m = tm.tm_mon + 1;
        y = tm.tm_year + 1900;
    }
	return tm;
}

int isnumber(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!isdigit(str[i]))
            return 0;
    }
    return 1;
}

float   take_value(std::string str)
{
    float   value;

    
    std::stringstream s(str);
    s >> value;
    // if (value < 0)
    //     std::cout << "Error: not a positive number.\n";
    // else if (value > 1000)
    //     std::cout << "Error: too large a number.\n";
    return value;
    
}

std::string removeSpaces(std::string str)
{
    std::string result = "";
    for (size_t i = 0; i < str.length(); i++) 
    {
        if (str[i] != ' ')
            result += str[i];
    }
    return result;
}

// std::string getlines(std::string str)
// {
    
// }

// int	countWord(std::string str)
// {
//     std::stringstream   s(str);
//     std::string word;
//     int cp = 0;
//     while (s >> word)
//         cp++;
//     return cp;
// }

void	read_input(std::string str)
{
    std::ifstream myfile(str);
    std::string s1;
    std::map<std::string, float>m;
    if (!myfile)
    {
        std::cout << "Error: could not open file." << std::endl;
        return ;
    }
    while (getline(myfile, s1))
    {
        std::string date;
        float value;

        s1 = removeSpaces(s1);
        // std::cout << s1 << std::endl;
        size_t pos = s1.find("|");
        date =  s1.substr(0, pos);
        value = take_value(s1.substr(pos + 1));
        m.insert(std::pair<std::string, float>(date, value));
        // std::cout << date << "\t" << value << "\n";
        if (myfile.eof())
            break ;
    }
    std::map<std::string, float>::iterator it;
    for (it = m.begin(); it != m.end(); ++it)
        std::cout << it->first << "\t" << it->second << std::endl;
}