/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:30:09 by thorgal           #+#    #+#             */
/*   Updated: 2025/10/16 17:54:32 by thorgal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog( void );
	Dog( const Dog& src );
	Dog& operator=( const Dog& rhs );
	~Dog( void );

	void makeSound( void ) const;
};

#endif
