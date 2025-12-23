/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:15:05 by thorgal           #+#    #+#             */
/*   Updated: 2025/10/15 17:45:25 by thorgal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int					_value;
	static const int	_fractionalBits;

public:
	Fixed( void );
	Fixed( const Fixed& src );
	Fixed& operator=( const Fixed& rhs );
	~Fixed( void );

	Fixed( const int value );
	Fixed( const float value );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	
	float	toFloat( void ) const;
	int		toInt( void ) const;

	bool	operator>( const Fixed& rhs ) const;
	bool	operator<( const Fixed& rhs ) const;
	bool	operator>=( const Fixed& rhs ) const;
	bool	operator<=( const Fixed& rhs ) const;
	bool	operator==( const Fixed& rhs ) const;
	bool	operator!=( const Fixed& rhs ) const;

	Fixed	operator+( const Fixed& rhs ) const;
	Fixed	operator-( const Fixed& rhs ) const;
	Fixed	operator*( const Fixed& rhs ) const;
	Fixed	operator/( const Fixed& rhs ) const;

	Fixed&	operator++( void );
	Fixed	operator++( int );
	Fixed&	operator--( void );
	Fixed	operator--( int );

	static Fixed&		min( Fixed& a, Fixed& b );
	static const Fixed&	min( const Fixed& a, const Fixed& b );
	static Fixed&		max( Fixed& a, Fixed& b );
	static const Fixed&	max( const Fixed& a, const Fixed& b );
};

std::ostream& operator<<( std::ostream& out, const Fixed& fixed );

#endif