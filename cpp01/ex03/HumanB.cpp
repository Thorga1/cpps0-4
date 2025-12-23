/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 12:24:37 by thorgal           #+#    #+#             */
/*   Updated: 2025/10/09 12:46:39 by thorgal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	std::cout << _name << " is ready to fight." << std::endl;
}

HumanB::~HumanB(void)
{	
	std::cout << _name << " is gone." << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
	std::cout << _name << " equipped a " << this->_weapon->getType() << std::endl;
}

void HumanB::attack( void )
{
	std::cout << this->_name << " attacks with their ";

	if (this->_weapon != NULL)
	{
		std::cout << this->_weapon->getType() << std::endl;
	}
	else
	{
		std::cout << "bare hands" << std::endl; 
	}
}
