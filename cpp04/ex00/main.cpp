/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:07:17 by thorgal           #+#    #+#             */
/*   Updated: 2025/10/16 18:11:03 by thorgal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

void print_separator(const std::string& message) {
	std::cout << "\n==============================================" << std::endl;
	std::cout << "--- " << message << " ---" << std::endl;
	std::cout << "==============================================" << std::endl;
}

int main( void )
{
	print_separator("PART 1: Subject Runtime Polymorphism Test");

	const Animal* meta = new Animal(); 
	const Animal* j = new Dog();      
	const Animal* i = new Cat();      

	std::cout << "\n--- Type and Sound Output ---" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << "\n--- Virtual Destructor Cleanup ---" << std::endl;
	delete i;
	delete j;
	delete meta;

	print_separator("PART 2: WrongAnimal Static Polymorphism Test");

	const WrongAnimal* wrong_meta = new WrongAnimal();
	const WrongAnimal* wrong_i = new WrongCat(); 

	std::cout << "\n--- Sound Output (Expected Flaw) ---" << std::endl;
	std::cout << "WrongCat call via base pointer: ";
	wrong_i->makeSound();
	wrong_meta->makeSound();


	std::cout << "\n--- Non-Virtual Destructor Cleanup (Memory Leak Test) ---" << std::endl;
	delete wrong_i;
	delete wrong_meta;

	print_separator("End of Program");
	return 0;
}