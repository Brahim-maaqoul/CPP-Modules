/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:02:56 by bmaaqoul          #+#    #+#             */
/*   Updated: 2023/03/19 01:50:16 by bmaaqoul         ###   ########.fr       */
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

float   take_value(std::string str)
{
    float   value;
    std::stringstream s(str);
    s >> value;
}

int	countWord(std::string str)
{
    std::stringstream   s(str);
    std::string word;
    int cp = 0;
    while (s >> word)
        cp++;
    return cp;
}

void	parse(std::string str)
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
        if (countWord(s1) > 3)
        {
            std::cout << "Error: file must use the following format: date | value\n";
            return;
        }
        size_t pos = s1.find("|");
        if (pos == std::string::npos)
            m.insert(std::pair<std::string, float>(s1, 1));
        else
        {
            date =  s1.substr(0, pos - 1);
            value = std::stof(s1.substr(pos + 2));
            m.insert(std::pair<std::string, float>(date, value));
        }
        if (myfile.eof())
            break ;
    }
    std::map<std::string, float>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
        std::cout << it->first << "\t" << it->second << std::endl;
}