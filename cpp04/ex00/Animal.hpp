/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:28:10 by thorgal           #+#    #+#             */
/*   Updated: 2025/10/16 17:28:48 by thorgal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
protected:
	std::string type;

public:
	Animal( void );
	Animal( const Animal& src );
	Animal& operator=( const Animal& rhs );
	virtual ~Animal( void ); 

	//core Polymorphic Function: Declared virtual
	virtual void makeSound( void ) const;

	//accessor (non-virtual, const-safe)
	const std::string& getType( void ) const;
};

#endif