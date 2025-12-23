/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 10:24:12 by thorgal           #+#    #+#             */
/*   Updated: 2025/10/09 12:21:33 by thorgal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>

class HumanA
{
	private:
		std::string _name;
		Weapon&		_weapon;		

	public:
		HumanA(std::string name, Weapon& Weapon);
		~HumanA(void);
		
		void attack(void);
};

#endif