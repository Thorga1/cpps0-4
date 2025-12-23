/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:06:22 by thorgal           #+#    #+#             */
/*   Updated: 2025/10/16 18:07:10 by thorgal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat::WrongCat( const WrongCat& src ) : WrongAnimal(src)
{
	std::cout << "WrongCat Copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=( const WrongCat& rhs )
{
	std::cout << "WrongCat Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		WrongAnimal::operator=(rhs); 
	}
	return (*this);
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat Destructor called (NON-VIRTUAL)" << std::endl;
}

void WrongCat::makeSound( void ) const
{
	std::cout << "MIAW MIAW!" << std::endl;
}