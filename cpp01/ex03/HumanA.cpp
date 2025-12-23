/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 10:45:48 by thorgal           #+#    #+#             */
/*   Updated: 2025/10/09 12:23:45 by thorgal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA (std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
	std::cout << _name << " is armed with a " << _weapon.getType() << "." << std::endl;
}

HumanA::~HumanA( void )
{
    std::cout << _name << " is gone." << std::endl;
}

void HumanA::attack(void)
{
	std::cout << _name << " attacks with their " << this->_weapon.getType() << std::endl;
}
