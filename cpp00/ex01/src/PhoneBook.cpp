/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tordner <tordner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 11:40:59 by tordner           #+#    #+#             */
/*   Updated: 2025/07/02 11:23:48 by tordner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	next_index = 0;
	total_contacts = 0;
}

PhoneBook::~PhoneBook()
{

}

void	PhoneBook::addContact(const Contact& contact)
{
	contacts[next_index] = contact;
	next_index = (next_index + 1) % 8;
	if (total_contacts < 8)
		++total_contacts;
}

std::string	formatField(const std::string& str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	else
		return (std::string(10 - str.length(), ' ') + str);
}

void	PhoneBook::listContacts() const
{
	std::cout << "     Index|First Name| Last Name|  Nickname\n";
	for (int i = 0; i < total_contacts; ++i)
	{
		std::cout << std::setw(10) << i << "|"
					<< formatField(contacts[i].getFirstName()) << "|"
					<< formatField(contacts[i].getLastName()) << "|"
					<< formatField(contacts[i].getNickName()) << "\n";
	}
}

void	PhoneBook::displayContactDetails(int index) const
{
	if (index < 0 || index >= total_contacts)
	{
		std::cout << "Error: Invalid contact index." << std::endl;
		return;
    }
	const Contact& c = contacts[index];
	std::cout << "First name: " << c.getFirstName() << std::endl;
	std::cout << "Last name: " << c.getLastName() << std::endl;
	std::cout << "Nickname: " << c.getNickName() << std::endl;
	std::cout << "Phone number: " << c.getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << c.getDarkestSecret() << std::endl;
}