/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:28:35 by thorgal           #+#    #+#             */
/*   Updated: 2025/10/17 17:04:03 by thorgal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain( void )
{
	for (int i = 0; i < 100; ++i)
		this->ideas[i] = "Initial Brain Idea ";

	std::cout << "Brain Default constructor called" << std::endl;
}
Brain::Brain ( const Brain& src)
{
	for (int i = 0; i < 100; ++i)
		this->ideas[i] = src.ideas[i];
	
	std::cout << "Brain Copy constructor called" << std::endl;
}

Brain& Brain::operator=( const Brain& rhs )
{
	std::cout << "Brain Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		for (int i = 0; i < 100; ++i)
			this->ideas[i] = rhs.ideas[i];
	}
	return (*this);
}

Brain::~Brain( void )
{
	std::cout << "Brain Destructor called" << std::endl;
}

const std::string& Brain::getIdea( int index ) const
{
	if (index >= 0 && index < 100)
		return (this->ideas[index]);
	return (this->ideas[0]);
}

void Brain::setIdea( int index, const std::string& idea )
{
	if (index >= 0 && index < 100)
		this->ideas[index] = idea;
}
