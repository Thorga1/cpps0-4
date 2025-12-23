/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:06:28 by thorgal           #+#    #+#             */
/*   Updated: 2025/10/16 18:07:14 by thorgal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : type("WrongAnimal")
{
	std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& src ) : type(src.type)
{
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& rhs )
{
	std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal Destructor called (NON-VIRTUAL)" << std::endl;
}

void WrongAnimal::makeSound( void ) const
{
	std::cout << "WrongAnimal makes a generic, unspecified sound." << std::endl;
}

const std::string& WrongAnimal::getType( void ) const
{
	return (this->type);
}
