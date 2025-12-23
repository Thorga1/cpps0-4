/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 16:14:18 by thorgal           #+#    #+#             */
/*   Updated: 2025/10/09 10:30:42 by thorgal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) : _name(name) 
{
	std::cout << "Zombie " << this->_name << " created." << std::endl; 
}

Zombie::Zombie(void) : _name("Default_Horde_Zom")
{
	
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << ": I'm gone... for now." << std::endl; 
}

void Zombie::announce( void )
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie::set_name(std::string name)
{
	this->_name = name;
}