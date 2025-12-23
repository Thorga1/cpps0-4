/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:55:09 by thorgal           #+#    #+#             */
/*   Updated: 2025/10/17 17:57:05 by thorgal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : type("Animal")
{
	std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal( const Animal& src ) : type(src.type)
{
	std::cout << "Animal Copy constructor called" << std::endl;
}

Animal& Animal::operator=( const Animal& rhs )
{
	std::cout << "Animal Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return (*this);
}

Animal::~Animal( void )
{
	std::cout << "Animal Destructor called" << std::endl;
}

const std::string& Animal::getType( void ) const
{
	return (this->type);
}
