/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tordner <tordner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 10:32:23 by tordner           #+#    #+#             */
/*   Updated: 2025/06/19 11:56:40 by tordner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

void	print_arg(const char *word)
{
	std::size_t	len = std::strlen(word);
	
	for (std::size_t i = 0; i < len; i++)
	{
		if (std::isalpha(word[i]))
			std::cout << static_cast<char>(std::toupper(static_cast<unsigned char>(word[i])));
		else
			std::cout << word[i];
	}
	std::cout << ' ';
}

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < ac; i++)
			print_arg(av[i]);
		std::cout << std::endl;
	}
	return (0);
}
