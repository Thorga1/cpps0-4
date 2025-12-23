/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:28:28 by thorgal           #+#    #+#             */
/*   Updated: 2025/10/15 18:43:32 by thorgal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap( void ) : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Default constructor called (" << this->_name << ")" << std::endl;
}
ClapTrap::ClapTrap( const std::string& name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Name constructor called (" << this->_name << ")" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& src ) : _name(src._name), _hitPoints(src._hitPoints), _energyPoints(src._energyPoints), _attackDamage(src._attackDamage)
{
	std::cout << "ClapTrap Copy constructor called (" << this->_name << ")" << std::endl;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& rhs )
{
	std::cout << "ClapTrap Copy assignment operator called (" << this->_name << ")" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap Destructor called (" << this->_name << ")" << std::endl;
}

void ClapTrap::attack( const std::string& target )
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " cannot attack: is destroyed!" << std::endl;
		return ;
	}
	if (this->_energyPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " cannot attack: no energy points left!" << std::endl;
		return ;
	}
	this->_energyPoints--;
	std::cout << "ClapTrap " << this->_name << " attacks " << target 
			  << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount )
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already destroyed!" << std::endl;
		return ;
	}
	if (amount >= this->_hitPoints)
	{
		this->_hitPoints = 0;
		std::cout << "ClapTrap " << this->_name << " takes " << amount << " damage, and is DESTROYED!" << std::endl;
	}
	else
	{
		this->_hitPoints -= amount;
		std::cout << "ClapTrap " << this->_name << " takes " << amount << " damage, leaving " 
				  << this->_hitPoints << " HP." << std::endl;
	}
}

void ClapTrap::beRepaired( unsigned int amount )
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " cannot be repaired: is destroyed!" << std::endl;
		return ;
	}
	if (this->_energyPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " cannot be repaired: no energy points left!" << std::endl;
		return ;
	}
	this->_energyPoints--;
	this->_hitPoints += amount;
	std::cout << "ClapTrap " << this->_name << " repairs itself for " << amount 
			  << " HP, now has " << this->_hitPoints << " HP." << std::endl;
}

