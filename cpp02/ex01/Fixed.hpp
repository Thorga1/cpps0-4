/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:15:05 by thorgal           #+#    #+#             */
/*   Updated: 2025/10/15 17:39:00 by thorgal          ###   ########.fr       */
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
};

std::ostream& operator<<( std::ostream& out, const Fixed& fixed );

#endif