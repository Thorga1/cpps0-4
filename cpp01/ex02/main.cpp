/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 17:40:56 by thorgal           #+#    #+#             */
/*   Updated: 2025/10/08 17:45:44 by thorgal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	// 1. A string variable initialized to "HI THIS IS BRAIN"
	std::string str = "HI THIS IS BRAIN";

	// 2. stringPTR: a pointer to the string
	std::string* stringPTR = &str;

	// 3. stringREF: a reference to the string
	//    We use the reference operator (&) in the declaration to create an alias for str.
	std::string& stringREF = str;

	// --- Part 1: Printing Memory Addresses ---

	std::cout << "--- Printing Memory Addresses ---" << std::endl;
	
	// The memory address of the string variable (using &)
	std::cout << "Address of str:         " << &str << std::endl;

	// The memory address held by stringPTR (printing the pointer itself)
	std::cout << "Address held by stringPTR: " << stringPTR << std::endl;

	// The memory address held by stringREF (using & on the reference)
	// This proves the reference is just another name for the original memory location.
	std::cout << "Address held by stringREF: " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "--- Printing Values ---" << std::endl;

	// The value of the string variable (direct access)
	std::cout << "Value of str:          " << str << std::endl;

	// The value pointed to by stringPTR (using the dereference operator *)
	std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;

	// The value pointed to by stringREF (direct access, no dereference required)
	// This is the key difference: the reference acts just like the variable itself.
	std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;

	return (0);
}
