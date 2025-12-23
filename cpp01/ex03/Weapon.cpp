/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 10:29:50 by thorgal           #+#    #+#             */
/*   Updated: 2025/10/09 10:42:47 by thorgal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon (std::string type) : _type(type)
{
	std::cout << "Weapon " << this->_type << " created." << std::endl;
}

Weapon::Weapon (void) : _type("Bare Hands")
{
	
}

Weapon::~Weapon (void)
{
	std::cout << "Weapon " << this->_type << " destroyed." << std::endl;
}

const std::string& Weapon::getType(void) const
{
	return (this->_type);
}

void Weapon::setType(std::string newType)
{
    this->_type = newType;
}
