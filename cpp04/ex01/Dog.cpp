/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:29:04 by thorgal           #+#    #+#             */
/*   Updated: 2025/10/17 16:52:43 by thorgal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal()
{
	this->type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog Default constructor called (with allocated brain)" << std::endl;
}

Dog::Dog( const Dog& src ) : Animal(src)
{
	this->_brain = new Brain(*(src._brain));
	std::cout << "Dog Copy constructor called (Deep Copied Brain)" << std::endl;
}

Dog& Dog::operator=( const Dog& rhs )
{
	std::cout << "Dog Copy assignment operator called (with deep copy logic)" << std::endl;
	if (this != &rhs)
	{
		Animal::operator=(rhs); 
		delete this->_brain;
		this->_brain = new Brain(*(rhs._brain)); 
	}
	return (*this);
}

Dog::~Dog( void )
{
	delete this->_brain;
	std::cout << "Dog Destructor called (with deleted Brain)" << std::endl;
}

void Dog::makeSound( void ) const
{
	std::cout << "Woof woof!" << std::endl;
}

const std::string& Dog::getIdea( int index ) const
{
    return (this->_brain->getIdea(index));
}

void Dog::setIdea( int index, const std::string& idea )
{
    this->_brain->setIdea(index, idea);
}
