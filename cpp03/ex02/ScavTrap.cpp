/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:51:39 by thorgal           #+#    #+#             */
/*   Updated: 2025/10/16 16:45:39 by thorgal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap( void ) : ClapTrap()
{
	//we override with ScavTrap's specific stats:
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	std::cout << "ScavTrap Default constructor called (" << this->_name << ")" << std::endl;
}

ScavTrap::ScavTrap( const std::string& name ) : ClapTrap(name)
{
	//same
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	std::cout << "ScavTrap Name constructor called (" << this->_name << ")" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& src ) : ClapTrap(src)
{
	std::cout << "ScavTrap Copy constructor called (" << this->_name << ")" << std::endl;
}

ScavTrap& ScavTrap::operator=( const ScavTrap& rhs )
{
	std::cout << "ScavTrap Copy assignment operator called (" << this->_name << ")" << std::endl;
	if (this != &rhs)
	{
		ClapTrap::operator=(rhs); 
	}
	return (*this);
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap Destructor called (" << this->_name << ")" << std::endl;
}

void ScavTrap::attack( const std::string& target )
{
	if (this->_hitPoints == 0 || this->_energyPoints == 0)
	{
		ClapTrap::attack(target);
		return ;
	}
	this->_energyPoints--;
	std::cout << "ScavTrap " << this->_name << " attacks " << target 
			  << ", causing " << this->_attackDamage << " points of damage with a massive punch!" << std::endl;
}

void ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
}
