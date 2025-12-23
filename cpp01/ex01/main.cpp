/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 17:06:33 by thorgal           #+#    #+#             */
/*   Updated: 2025/10/08 17:33:43 by thorgal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

#define HORDE_SIZE 5

int main()
{
	std::cout << "--- Zombie Horde Test ---" << std::endl;

	Zombie* horde = zombieHorde(HORDE_SIZE, "Infected");

	if (horde == NULL)
	{
		std::cerr << "Test failed: zombieHorde returned NULL." << std::endl;
		return 1;
	}

	std::cout << "\n--- Announcing all " << HORDE_SIZE << " zombies ---" << std::endl;
	for (int i = 0; i < HORDE_SIZE; ++i)
	{
		horde[i].announce();
	}

	std::cout << "\n--- Deallocating the entire horde with delete[] ---" << std::endl;
	
	delete [] horde;

	std::cout << "\n--- Test finished. Check Valgrind for leaks! ---" << std::endl;
	return 0;
}