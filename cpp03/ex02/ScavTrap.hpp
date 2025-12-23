/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:51:37 by thorgal           #+#    #+#             */
/*   Updated: 2025/10/15 18:53:36 by thorgal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap( void );
	ScavTrap( const std::string& name );
	ScavTrap( const ScavTrap& src );
	ScavTrap& operator=( const ScavTrap& rhs );
	~ScavTrap( void );

	void attack( const std::string& target );
	void guardGate( void );
};

#endif