/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:29:47 by thorgal           #+#    #+#             */
/*   Updated: 2025/10/17 16:54:02 by thorgal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"


class Cat : public Animal
{
private:
	Brain* _brain;
public:
    Cat( void );
    Cat( const Cat& src );
    Cat& operator=( const Cat& rhs );
    ~Cat( void );

    void	makeSound( void ) const;
	const	std::string& getIdea( int index ) const;
	void	setIdea( int index, const std::string& idea );
};

#endif
