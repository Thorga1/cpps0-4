/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 12:50:52 by thorgal           #+#    #+#             */
/*   Updated: 2025/10/09 13:06:52 by thorgal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return (1);
    }
	
	std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
	if (s1.empty())
    {
        std::cerr << "Error: s1 cannot be an empty string." << std::endl;
        return (1);
    }

	std::ifstream ifs(filename.c_str()); 
    if (!ifs.is_open())
    {
        std::cerr << "Error: Could not open input file " << filename << std::endl;
        return (1);
    }

	std::string content;
	std::string line;
	while (std::getline(ifs, line))
	{
		content += line;
		if (!ifs.eof()) 
		content += '\n';
	}
	ifs.close();

	std::string::size_type pos = 0; //std::string member function use the size_type type and not int to prevent errors with negative numbers!!!
    while ((pos = content.find(s1, pos)) != std::string::npos) //npos being "not found" :P
    {
        content.erase(pos, s1.length());
        content.insert(pos, s2);
        pos += s2.length();
    }
	
	std::string output_filename = filename + ".replace";
    std::ofstream ofs(output_filename.c_str());
    if (!ofs.is_open())
    {
        std::cerr << "Error: Could not create output file " << output_filename << std::endl;
        return (1);
    }
    ofs << content;
    ofs.close();
    std::cout << "Successfully replaced occurrences and created " << output_filename << std::endl;
}

