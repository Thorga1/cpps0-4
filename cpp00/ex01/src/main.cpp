/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tordner <tordner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 12:14:51 by tordner           #+#    #+#             */
/*   Updated: 2025/07/02 12:03:32 by tordner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

bool isNotEmpty(const std::string& str)
{
	return (!str.empty());
}

int main()
{
	PhoneBook p;
    std::string	command;
	int index = -1;

	while (true)
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
		if (!std::getline(std::cin, command))
			break;
		if (command == "EXIT")
			break;
		if (command == "ADD")
		{

			Contact	c;
			std::string	input;
			
			std::cout << "First name: ";
			std::getline(std::cin, input);
			if (!isNotEmpty(input))
			{
				std::cout << "Cannot be empty!" << std::endl;
				continue;
			}
			c.setFirstName(input);

			std::cout << "Last name: ";
			std::getline(std::cin, input);
			if (!isNotEmpty(input))
			{
				std::cout << "Cannot be empty!" << std::endl;
				continue;
			}
			c.setLastName(input);

			std::cout << "Nickname: ";
			std::getline(std::cin, input);
			if (!isNotEmpty(input))
			{
				std::cout << "Cannot be empty!" << std::endl;
				continue;
			}
			c.setNickName(input);

			std::cout << "Phone Number: ";
			std::getline(std::cin, input);
			if (!isNotEmpty(input))
			{
				std::cout << "Cannot be empty!" << std::endl;
				continue;
			}
			c.setPhoneNumber(input);

			std::cout << "Darkest Secret: ";
			std::getline(std::cin, input);
			if (!isNotEmpty(input))
			{
				std::cout << "Cannot be empty!" << std::endl;
				continue;
			}
			c.setDarkestSecret(input);
			p.addContact(c);
			std::cout << "Contact added successfully." << std::endl;
		}
		else if (command == "SEARCH")
		{
			p.listContacts();

			std::cout << "Enter index to view details: ";
			std::string index_str;
			std::getline(std::cin, index_str);
			if (index_str.empty())
				continue;
			try
			{
				index = std::stoi(index_str);
			}
			catch (...)
			{
				std::cout << "Invalid input. Please enter a number." << std::endl;
				continue;
			}
			p.displayContactDetails(index);
		}
		else
			std::cout << "Unknown command. Please enter ADD, SEARCH or EXIT." << std::endl;
	}
	std::cout << "Termination..." << std::endl;
	return 0;
}