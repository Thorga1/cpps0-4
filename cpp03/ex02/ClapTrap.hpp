/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:28:27 by thorgal           #+#    #+#             */
/*   Updated: 2025/10/15 18:52:31 by thorgal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap
{
protected:
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;

public:
	ClapTrap( void ); 
	ClapTrap( const ClapTrap& src );
	ClapTrap& operator=( const ClapTrap& rhs );
	~ClapTrap( void );
	ClapTrap( const std::string& name );

	void attack( const std::string& target );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );
};

#endif