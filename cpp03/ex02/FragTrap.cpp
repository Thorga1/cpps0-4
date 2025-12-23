/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:51:39 by thorgal           #+#    #+#             */
/*   Updated: 2025/10/16 16:51:19 by thorgal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap( void ) : ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout << "FragTrap Default constructor called (" << this->_name << ")" << std::endl;
}

FragTrap::FragTrap( const std::string& name ) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout << "FragTrap Name constructor called (" << this->_name << ")" << std::endl;
}

FragTrap::FragTrap( const FragTrap& src ) : ClapTrap(src)
{
	std::cout << "FragTrap Copy constructor called (" << this->_name << ")" << std::endl;
}

FragTrap& FragTrap::operator=( const FragTrap& rhs )
{
	std::cout << "FragTrap Copy assignment operator called (" << this->_name << ")" << std::endl;
	if (this != &rhs)
	{
		ClapTrap::operator=(rhs); 
	}
	return (*this);
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap Destructor called (" << this->_name << ")" << std::endl;
}

void FragTrap::highFivesGuys( void )
{
	if (this->_hitPoints == 0)
	{
		std::cout << "FragTrap " << this->_name << " is too broken to high-five!" << std::endl;
		return;
	}
	std::cout << "FragTrap " << this->_name << " requests a high-five! Give me five, guys!" << std::endl;
}