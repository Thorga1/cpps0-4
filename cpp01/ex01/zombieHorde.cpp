/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 16:51:13 by thorgal           #+#    #+#             */
/*   Updated: 2025/10/08 17:10:02 by thorgal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie*	zombieHorde(int N, std::string name)
{
	if (N <= 0)
	{
		std::cerr << "Error: N must be a positive number for the horde." << std::endl;
		return (NULL);
	}
	Zombie* horde = new Zombie[N];

	for (int i = 0; i < N; ++i)
	{
		horde[i].set_name(name);
	}

	return (horde);
}