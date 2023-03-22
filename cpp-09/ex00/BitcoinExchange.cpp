/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:02:56 by bmaaqoul          #+#    #+#             */
/*   Updated: 2023/03/22 04:28:30 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

struct	tm	take_date(std::string date)
{
	struct tm tm;

	memset(&tm, 0, sizeof(struct tm));
    if (strptime(date.c_str(), "%Y-%m-%d", &tm))
    {
        tm.tm_mon = tm.tm_mon + 1;
        tm.tm_year = tm.tm_year + 1900;
    }
	return tm;
}

float   take_value(std::string str)
{
    float   value;
    size_t  pos;
    
    if (count_delimiter(str, '.') > 1 || count_delimiter(str, '-') > 1)
        return 0;
    pos = str.find(".");
    if (pos != std::string::npos)
        if (str[pos + 1] == *str.end())
            return 0;
    pos = str.find("-");
    if (pos != std::string::npos)
        if (*str.begin() != '-' && !isdigit(str[pos + 1]))
            return 0;
    pos = str.find_first_not_of("0123456789.-+");
    if (pos != std::string::npos)
        return 0;
    std::stringstream s(str);
    s >> value;
    return value;
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

bool isLeapYear(int year)
{
    if (year % 4 != 0)
        return false;
    else if (year % 100 != 0)
        return true;
    else if (year % 400 != 0)
        return false;
    else
        return true;
}


int check_date(std::string date)
{
    struct tm tm;

    if (count_delimiter(date, '-') != 2)
    {
        std::cout << "Error: wrong date format\n";
        return 0;
    }
    tm = take_date(date);
    if (tm.tm_year < 1 || tm.tm_mon < 1 || tm.tm_mday < 1 || tm.tm_mon > 12 || tm.tm_mday > 31)
    {
        std::cout << "Error: bad input => " << date << std::endl;
        return 0;
    }
    if ((tm.tm_mon == 4 || tm.tm_mon == 6 || tm.tm_mon == 9 || tm.tm_mon == 11) && tm.tm_mday > 30)
    {
        std::cout << "Error: bad input => " << date << std::endl;
        return 0;
    }
    if (tm.tm_mon == 2)
    {
        if (tm.tm_mday > 29 || (!isLeapYear(tm.tm_year) && tm.tm_mday > 28))
        {
            std::cout << "Error: bad input => " << date << std::endl;
            return 0;
        }
    }
    return 1;
}

int check_value(float value)
{
    if (!value)
    {
        std::cout << "Error: not a number\n";
        return 0;
    }
    else if (value < 0)
    {
        std::cout << "Error: not a positive number.\n";
        return 0;
    }
    else if (value > 1000)
    {
        std::cout << "Error: too large a number.\n";
        return 0;
    }
    else
        return 1;
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

std::map<std::string, float> read_data(std::string file)
{
    std::map<std::string, float>m;
    std::ifstream myfile(file);
    std::string s1;
    int line = 1;

    if (!myfile)
    {
        std::cout << "Error: could not open file." << std::endl;
        exit(0);
    }
    while (getline(myfile, s1))
    {
       std::string date;
        float value;
        size_t  p;

        if (s1.empty())
            continue;
        if (line > 1)
        {
            s1 = removeSpaces(s1);
            size_t pos = s1.find(",");
            date =  s1.substr(0, pos);
            value = take_value(s1.substr(pos + 1));
            if (count_delimiter(s1, ',') > 1)
                std::cout << "Error: enter a valid format\n";
            else if (!check_date(date))
                continue;
            else
                m.insert(std::pair<std::string, float>(date, value));
        }
        else
        {
            std::string v;
            p = s1.find(",");
            date =  s1.substr(0, p);
            v = s1.substr(p + 1);
            if (count_delimiter(s1, ',') != 1 || date != "date" || v != "exchange_rate")
            {
                std::cout << "Error: bad format in first line\n";
                break;
            }
            line++;
        }
        if (myfile.eof())
            break ;
    }
    return m;
}

void	read_input(std::string str)
{
    std::ifstream myfile(str);
    std::string s1;
    std::map<std::string, float>m;

    m = read_data("data.csv");
    int line = 1;
    if (!myfile)
    {
        std::cout << "Error: could not open file." << std::endl;
        return ;
    }
    while (!myfile.fail() && getline(myfile, s1))
    {
        std::string date;
        float value;
        size_t  p;

        if (s1.empty())
            continue;
        if (line > 1)
        {
            s1 = removeSpaces(s1);
            size_t pos = s1.find("|");
            date =  s1.substr(0, pos);
            value = take_value(s1.substr(pos + 1));
            if (count_delimiter(s1, '|') > 1)
                std::cout << "Error: enter a valid format\n";
            else if (!check_date(date) || !check_value(value))
                continue;
            // m.insert(std::pair<std::string, float>(date, value));
            else
            {
                std::map<std::string, float>::iterator it = m.lower_bound(date);
                if (date != it->first)
                {
                    it--;
                    std::cout << date << " => " << value << " = " << value * it->second << "\n";
                }
                else
                    std::cout << date << " => " << value << " = " << value * m[date] << "\n";
            }
        }
        else
        {
            std::string v;
            p = s1.find("|");
            date =  s1.substr(0, p - 1);
            v = s1.substr(p + 2);
            if (count_delimiter(s1, '|') != 1 || date != "date" || v != "value")
            {
                std::cout << "Error: bad format in first line\n";
                break;
            }
            line++;
        }
        if (myfile.eof())
            break ;
    }
    // std::map<std::string, float>::iterator it;
    // for (it = m.begin(); it != m.end(); ++it)
    //     std::cout << it->first << "\t" << it->second << std::endl;
}