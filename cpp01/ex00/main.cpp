/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 16:32:00 by thorgal           #+#    #+#             */
/*   Updated: 2025/10/08 16:41:40 by thorgal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main()
{
	std::cout << "--- Direct STACK Zombie ---" << std::endl;
	Zombie stack_zombie("StackZom");
	stack_zombie.announce();

	std::cout << "\n--- Calling randomChump (STACK allocation inside a function) ---" << std::endl;
	randomChump("Chump1");
	randomChump("Chump2");

	std::cout << "\n--- Creating HEAP ZOMBIES with newZombie() ---" << std::endl;
	Zombie* heap_zombie_a = newZombie("HeapZomA");
	Zombie* heap_zombie_b = newZombie("HeapZomB");

	heap_zombie_a->announce();
	heap_zombie_b->announce();

	std::cout << "\n--- Manually destroying HEAP ZOMBIES with 'delete' ---" << std::endl;
	delete heap_zombie_a;
	delete heap_zombie_b;

	std::cout << "\n--- Main scope is ending. 'StackZom' destructor will be called now. ---" << std::endl;
	return (0);
}
