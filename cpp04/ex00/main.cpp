/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msokolov <msokolov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 13:18:15 by msokolov          #+#    #+#             */
/*   Updated: 2026/04/11 17:40:23 by msokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog("Dog");
	const Animal* i = new Cat("Cat");
	const WrongAnimal* k = new Wrongcat("nun");
	std::cout << k->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	k->makeSound();
	delete k;
	delete i;
	delete j;
}