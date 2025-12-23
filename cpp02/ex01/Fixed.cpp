/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:16:21 by thorgal           #+#    #+#             */
/*   Updated: 2025/10/15 17:32:24 by thorgal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

const int Fixed::_fractionalBits = 8;

Fixed::Fixed( void ) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& src ) : _value(src._value)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=( const Fixed& rhs )
{
	std::cout << "Copy assignment operator called" << std::endl;

	if (this != &rhs)
	{
		this->_value = rhs.getRawBits();
	}
	return (*this); 
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

Fixed::Fixed( const int value )
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = value << _fractionalBits;
}

Fixed::Fixed( const float value )
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(value * 256);
}

float Fixed::toFloat( void ) const
{
	return ((float)this->_value / (float)(256));
}

int Fixed::toInt( void ) const
{
	return (this->_value >> _fractionalBits);
}

// required to be defined outside the class scope.
std::ostream& operator<<( std::ostream& out, const Fixed& fixed )
{
	out << fixed.toFloat();
	return (out);
}