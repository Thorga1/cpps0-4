/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:29:04 by thorgal           #+#    #+#             */
/*   Updated: 2025/10/16 18:02:45 by thorgal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal()
{
	this->type = "Dog";
	std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog( const Dog& src ) : Animal(src)
{
	std::cout << "Dog Copy constructor called" << std::endl;
}

Dog& Dog::operator=( const Dog& rhs )
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		Animal::operator=(rhs); 
	}
	return (*this);
}

Dog::~Dog( void )
{
	std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound( void ) const
{
	std::cout << "Woof woof!" << std::endl;
}
