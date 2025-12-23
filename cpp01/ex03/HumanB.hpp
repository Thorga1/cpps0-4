/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 10:28:51 by thorgal           #+#    #+#             */
/*   Updated: 2025/10/09 12:27:14 by thorgal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>

class HumanB
{
	private:
		std::string _name;
		Weapon*		_weapon;		

	public:
		HumanB(std::string name);
		~HumanB(void);
		
		void setWeapon(Weapon& weapon);
		void attack(void);
};

#endif