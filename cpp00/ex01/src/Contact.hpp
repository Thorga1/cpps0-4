/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tordner <tordner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 12:19:49 by tordner           #+#    #+#             */
/*   Updated: 2025/07/02 10:11:27 by tordner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <cstring>
# include <string>
# include <ctime>

class Contact
{
	private:
			std::string first_name;
			std::string last_name;
			std::string nickname;
			std::string phone_number;
			std::string darkest_secret;
	public:
			Contact();
			~Contact();

			void setFirstName(const std::string& firstName);
			void setLastName(const std::string& lastName);
			void setNickName(const std::string& nickName);
			void setPhoneNumber(const std::string& phoneNumber);
			void setDarkestSecret(const std::string& darkestSecret);

			std::string getFirstName() const;
			std::string getLastName() const;
			std::string getNickName() const;
			std::string getPhoneNumber() const;
			std::string getDarkestSecret() const;
};

#endif