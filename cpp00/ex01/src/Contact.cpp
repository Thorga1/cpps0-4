/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tordner <tordner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 12:19:55 by tordner           #+#    #+#             */
/*   Updated: 2025/07/02 10:28:04 by tordner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	first_name = "";
	last_name = "";
	nickname = "";
	phone_number = "";
	darkest_secret = "";
}

Contact::~Contact()
{

}

void	Contact::setFirstName(const std::string& firstName)
{
	first_name = firstName;
}

void	Contact::setLastName(const std::string& lastName)
{
	last_name = lastName;
}

void	Contact::setNickName(const std::string& nickName)
{
	nickname = nickName;
}

void	Contact::setPhoneNumber(const std::string& phoneNumber)
{
	phone_number = phoneNumber;
}

void	Contact::setDarkestSecret(const std::string& darkestSecret)
{
	darkest_secret = darkestSecret;
}

std::string	Contact::getFirstName() const
{
	return (first_name);
}

std::string	Contact::getLastName() const
{
	return (last_name);
}

std::string	Contact::getNickName() const
{
	return (nickname);
}

std::string	Contact::getPhoneNumber() const
{
	return (phone_number);
}

std::string	Contact::getDarkestSecret() const
{
	return (darkest_secret);
}