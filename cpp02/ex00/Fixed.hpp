/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:55:34 by thorgal           #+#    #+#             */
/*   Updated: 2025/10/15 17:07:28 by thorgal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:

	int                 _value;
	static const int    _fractionalBits;

public:
	Fixed( void );
	Fixed( const Fixed& src );
	Fixed& operator=( const Fixed& rhs );
	~Fixed( void );
	int     getRawBits( void ) const;
	void    setRawBits( int const raw );
};

#endif
