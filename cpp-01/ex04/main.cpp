/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 01:14:15 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/11/09 21:49:18 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string   replace_string(std::string content, std::string s1, std::string s2)
{
    size_t  pos;
    std::string sub = content;

    while ((pos = content.find(s1)) && pos != std::string::npos)
	{
		sub = content.substr(0, pos);
		sub.append(s2);
		sub.append(content.substr(pos + s1.length(), content.size()));
		content = sub;
	}
    return sub;
}

int main(int ac, char **av)
{
    if (ac == 4)
    {
        std::string filename = av[1];
        std::ifstream myfile(filename);
        std::string s1, content;
        std::ofstream file1;
        if (!myfile)
        {
            std::cout << "error occuring while openning the file" << std::endl;
            return (0);
        }
        while (getline(myfile, s1))
        {
            if (myfile.eof())
                break;
            content += s1.append("\n");
        }
        file1.open(filename.append(".replace"));
        if (!file1)
        {
            std::cout << "error occuring while openning the file" << std::endl;
            return (0);
        }
		content = replace_string(content, av[2], av[3]);
        file1 << content;
        myfile.close();
        file1.close();
        return 0;
    }
    std::cout << "u need to enter a valid arguments !" << std::endl;
    return 0;
}