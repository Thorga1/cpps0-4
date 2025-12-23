/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 16:09:59 by thorgal           #+#    #+#             */
/*   Updated: 2025/10/08 17:04:33 by thorgal          ###   ########.fr       */
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
	// Constructors
	Zombie(std::string name);
	Zombie(void);

	// Destructor
	~Zombie(void);

	// Member function to announce the zombie
	void announce(void);
	void set_name(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif