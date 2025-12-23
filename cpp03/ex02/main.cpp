/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:28:25 by thorgal           #+#    #+#             */
/*   Updated: 2025/10/16 16:54:02 by thorgal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

void print_separator(const std::string& message) {
	std::cout << "\n==============================================" << std::endl;
	std::cout << "--- " << message << " ---" << std::endl;
	std::cout << "==============================================" << std::endl;
}

int main( void )
{
	print_separator("TEST 1: ClapTrap Base Class");
	ClapTrap bob("Bob");
	bob.attack("Bandit");
	bob.takeDamage(9); 
	bob.beRepaired(1); 

	print_separator("TEST 2: ScavTrap Derived Class");
	ScavTrap serena("Serena");
	serena.attack("Skag");
	serena.guardGate(); 

	print_separator("TEST 3: FragTrap Derived Class");
	FragTrap roland("Roland");
	roland.attack("Rakk");
	roland.takeDamage(10);
	roland.highFivesGuys();

	print_separator("TEST 4: OCF & Inheritance Chain");
	{
		FragTrap chain_original("Chain_Original");
		
		std::cout << "\n--- Copy Constructor ---" << std::endl;
		FragTrap chain_copy(chain_original);
		
		std::cout << "\n--- Copy Assignment ---" << std::endl;
		FragTrap chain_assign("Placeholder");
		chain_assign = chain_original;
		
		std::cout << "\n--- Scope End: Destruction Chain Test ---" << std::endl;
	}
	
	std::cout << "\n--- Final Program End ---" << std::endl;
	return 0;
}
