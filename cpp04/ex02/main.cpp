/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:07:17 by thorgal           #+#    #+#             */
/*   Updated: 2025/10/17 18:00:10 by thorgal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include <iostream>

void print_separator(const std::string& message) {
	std::cout << "\n==============================================" << std::endl;
	std::cout << "--- " << message << " ---" << std::endl;
	std::cout << "==============================================" << std::endl;
}

int main( void )
{
	print_separator("Abstract Class Proof of Concept");

	// Animal basic_animal;         // Error: cannot declare variable 'basic_animal' to be of abstract type 'Animal'
	// Animal* ptr_animal = new Animal(); // Error: cannot allocate an object of abstract type 'Animal'

	std::cout << "Attempt to instantiate Animal class is blocked at compile time." << std::endl;
	std::cout << "The lines that would cause the error are commented out." << std::endl;

	std::cout << "\n--- Successful Instantiation of Derived Class ---" << std::endl;

	Dog concrete_dog; 
	Animal* polymorphic_ptr = new Dog(); 

	std::cout << "\n--- Functionality Check ---" << std::endl;
	concrete_dog.makeSound(); 
	polymorphic_ptr->makeSound(); 

	std::cout << "\n--- Cleanup: Deleting Heap Object ---" << std::endl;
	delete polymorphic_ptr;

	std::cout << "\n--- Final Program End ---" << std::endl;
	return (0);
}