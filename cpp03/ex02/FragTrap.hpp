/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:51:37 by thorgal           #+#    #+#             */
/*   Updated: 2025/10/16 16:51:17 by thorgal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap( void );
	FragTrap( const std::string& name );
	FragTrap( const FragTrap& src );
	FragTrap& operator=( const FragTrap& rhs );
	~FragTrap( void );

	void highFivesGuys( void );
};

#endif