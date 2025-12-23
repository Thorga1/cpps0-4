/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 14:26:58 by thorgal           #+#    #+#             */
/*   Updated: 2025/10/09 14:27:16 by thorgal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Usage: ./harlFilter <LOG LEVEL>" << std::endl;
		return (1);
	}

	Harl harl;
	std::string level_input = argv[1];

	std::cout << "--- Filtering from level: " << level_input << " ---" << std::endl;
	harl.complain(level_input);
	std::cout << "-----------------------------------------------" << std::endl;

	return 0;
}
