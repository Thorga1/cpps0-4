/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:02:57 by thorgal           #+#    #+#             */
/*   Updated: 2025/10/17 16:52:38 by thorgal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal()
{
	this->type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat Default constructor called (with allocated brain)" << std::endl;
}

Cat::Cat( const Cat& src ) : Animal(src)
{
	this->_brain = new Brain(*(src._brain));
	std::cout << "Cat Copy constructor called (with deep copied Brain)" << std::endl;
}

Cat& Cat::operator=( const Cat& rhs )
{
	std::cout << "Cat Copy assignment operator called (with deep copy logic)" << std::endl;
	if (this != &rhs)
	{
		Animal::operator=(rhs);
		delete this->_brain;
		this->_brain = new Brain(*(rhs._brain));
	}
	return (*this);
}

Cat::~Cat( void )
{
	delete this->_brain;
	std::cout << "Cat Destructor called (with deleted brain)" << std::endl;
}

void Cat::makeSound( void ) const
{
	std::cout << "Meow meow!" << std::endl;
}

const std::string& Cat::getIdea( int index ) const
{
    return (this->_brain->getIdea(index));
}

void Cat::setIdea( int index, const std::string& idea )
{
    this->_brain->setIdea(index, idea);
}

