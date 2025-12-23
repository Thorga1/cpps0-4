/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:53:19 by thorgal           #+#    #+#             */
/*   Updated: 2025/10/16 17:53:47 by thorgal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
protected:
	std::string type;

public:
	WrongAnimal( void );
	WrongAnimal( const WrongAnimal& src );
	WrongAnimal& operator=( const WrongAnimal& rhs );
	~WrongAnimal( void ); //not virtual!!!

	// Core Function: NOT virtual
	void makeSound( void ) const;

	const std::string& getType( void ) const;
};

#endif