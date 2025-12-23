/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 16:09:59 by thorgal           #+#    #+#             */
/*   Updated: 2025/10/08 16:47:40 by thorgal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
private:
	std::string _name;

public:
	// Constructor
	Zombie(std::string name);

	// Destructor
	~Zombie(void);

	// Member function to announce the zombie
	void announce(void);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif