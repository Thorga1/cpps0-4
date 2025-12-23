/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 13:44:21 by thorgal           #+#    #+#             */
/*   Updated: 2025/10/09 14:15:51 by thorgal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main()
{
	Harl harl;

	std::cout << "--- Harl Test: DEBUG ---" << std::endl;
	harl.complain("DEBUG");

	std::cout << "--- Harl Test: INFO ---" << std::endl;
	harl.complain("INFO");

	std::cout << "--- Harl Test: WARNING ---" << std::endl;
	harl.complain("WARNING");

	std::cout << "--- Harl Test: ERROR ---" << std::endl;
	harl.complain("ERROR");

	std::cout << "--- Harl Test: Invalid Level ---" << std::endl;
	harl.complain("INVALID_LEVEL");

	return (0);
}
