/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:28:25 by thorgal           #+#    #+#             */
/*   Updated: 2025/10/15 18:46:20 by thorgal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main( void )
{
	//Test Name Constructor
	ClapTrap hero("FragTrap");

	//Test Default Constructor (for copy/assignment)
	ClapTrap copy_hero;

	std::cout << "\n--- Testing Copy Constructor ---" << std::endl;
	ClapTrap clone_hero(hero);

	std::cout << "\n--- Testing Copy Assignment ---" << std::endl;
	copy_hero = hero;

	std::cout << "\n--- Testing Core Behaviors ---" << std::endl;
	hero.attack("Handsome Jack");
	hero.beRepaired(5);
	hero.takeDamage(15); //Should lead to destruction

	std::cout << "\n--- Testing After Destruction ---" << std::endl;
	hero.attack("The Air");
	hero.beRepaired(1);
	
	std::cout << "\n--- End of Program ---" << std::endl;
	return 0;
}
