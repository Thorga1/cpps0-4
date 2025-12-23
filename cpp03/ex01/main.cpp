/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:28:25 by thorgal           #+#    #+#             */
/*   Updated: 2025/10/16 16:44:13 by thorgal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <unistd.h>

void print_separator(const std::string& message)
{
    std::cout << "\n==============================================" << std::endl;
    std::cout << "--- " << message << " ---" << std::endl;
    std::cout << "==============================================" << std::endl;
}

int main( void )
{
    print_separator("TEST 1: Inheritance Chain & OCF");
    {
        ScavTrap alpha("AlphaScav");
        ScavTrap beta(alpha);
        ScavTrap gamma("GammaScav");
        gamma = alpha;
		std::cout << "--- Scope End: Destructors will be called now ---" << std::endl;
    }

    print_separator("TEST 2: New Stats & Abilities");

    ScavTrap patrol("PatrolUnit");

    patrol.attack("A Rando");
    patrol.attack("Another Rando");

    patrol.guardGate();

    patrol.takeDamage(95);

    patrol.beRepaired(10);

    std::cout << "\n--- Draining Energy (50 total, 3 used so far) ---" << std::endl;
    for (int i = 0; i < 46; ++i)
    {
        patrol.beRepaired(1);
    }
    // energy should now be 1 (48-47=1)
    patrol.attack("Final Target"); //uses the last EP (EP=0)
    patrol.attack("Empty Target"); //should fail and print error message

    std::cout << "\n--- Final Program End ---" << std::endl;
    return 0;
}
