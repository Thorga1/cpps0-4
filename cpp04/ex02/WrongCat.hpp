/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:53:50 by thorgal           #+#    #+#             */
/*   Updated: 2025/10/16 17:55:04 by thorgal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat( void );
	WrongCat( const WrongCat& src );
	WrongCat& operator=( const WrongCat& rhs );
	~WrongCat( void );

	void makeSound( void ) const;
};

#endif