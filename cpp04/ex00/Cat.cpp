/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:02:57 by thorgal           #+#    #+#             */
/*   Updated: 2025/10/16 18:04:30 by thorgal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal()
{
	this->type = "Cat";
	std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat( const Cat& src ) : Animal(src)
{
	std::cout << "Cat Copy constructor called" << std::endl;
}

Cat& Cat::operator=( const Cat& rhs )
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		Animal::operator=(rhs); 
	}
	return (*this);
}

Cat::~Cat( void )
{
	std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound( void ) const
{
	std::cout << "Meow meow!" << std::endl;
}