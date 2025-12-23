/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:29:47 by thorgal           #+#    #+#             */
/*   Updated: 2025/10/16 17:54:34 by thorgal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat( void );
    Cat( const Cat& src );
    Cat& operator=( const Cat& rhs );
    ~Cat( void );

    void makeSound( void ) const;
};

#endif
