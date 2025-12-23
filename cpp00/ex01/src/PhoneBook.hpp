/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tordner <tordner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 12:07:37 by tordner           #+#    #+#             */
/*   Updated: 2025/07/02 11:27:33 by tordner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <cstring>
# include <string>
# include <ctime>
# include <iostream>
# include <iomanip>
# include <string>
# include "Contact.hpp"

class PhoneBook
{
	private:
			Contact	contacts[8];
			int		next_index;
			int		total_contacts;
	public:
			PhoneBook();
			~PhoneBook();
			
			void	addContact(const Contact& contact);
			void	listContacts() const;
			void	displayContactDetails(int index) const;
};

#endif