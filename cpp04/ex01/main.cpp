/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:07:17 by thorgal           #+#    #+#             */
/*   Updated: 2025/10/17 17:06:34 by thorgal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

#define ARRAY_SIZE 50

void print_separator(const std::string& message) {
	std::cout << "\n==============================================" << std::endl;
	std::cout << "--- " << message << " ---" << std::endl;
	std::cout << "==============================================" << std::endl;
}

void test_subject_destruction()
{
	print_separator("TEST 1: Subject Test (Virtual Destructor)");

	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "\n--- Cleanup ---" << std::endl;
	delete i;
	delete j;

	std::cout << "Test 1 complete (Check Valgrind for leaks!)" << std::endl;
}

void test_polymorphic_array()
{
	print_separator("TEST 2: Polymorphic Array Destruction");
	
	Animal* zoo[ARRAY_SIZE];

	std::cout << "--- CREATING ZOO (Constructors & Brains) ---" << std::endl;
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		if (i < ARRAY_SIZE / 2)
			zoo[i] = new Dog();
		else
			zoo[i] = new Cat();
	}

	std::cout << "\n--- DELETING ZOO (Destructors: MUST show Brain -> Derived -> Base) ---" << std::endl;
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		delete zoo[i];
	}
}

void test_deep_copy()
{
	print_separator("TEST 3: Deep Copy Verification (No Shallow Copy)");

	Dog original;
	original.setIdea(0, "Original Dog Idea A");

	std::cout << "\n--- Copy Constructor Test ---" << std::endl;
	Dog copy(original);

	std::cout << "\n--- Copy Assignment Test ---" << std::endl;
	Dog assigned;
	assigned = original;

	original.setIdea(0, "MODIFIED Original Idea B");

	std::cout << "\n--- Deep Copy Check ---" << std::endl;
	std::cout << "Original Idea (Modified): " << original.getIdea(0) << std::endl;

	std::cout << "Copy Idea (Should be A): " << copy.getIdea(0) << std::endl; 

	std::cout << "Assigned Idea (Should be A): " << assigned.getIdea(0) << std::endl;
}


int main()
{
	test_subject_destruction();
	test_polymorphic_array();
	test_deep_copy();
	
	return (0);
}