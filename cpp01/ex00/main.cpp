/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msokolov <msokolov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 13:24:52 by msokolov          #+#    #+#             */
/*   Updated: 2026/03/23 14:57:39 by msokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zombie;
	zombie = newZombie("Foo");
	if (zombie == NULL)
	{
		std::cout << "Why???" << std::endl;
		return(delete(zombie), 0);
	}
	std::cout << "Heap Zombie: " << std::endl;
	zombie->announce();
	std::cout << std::endl;
	std::cout << "Stack Zombie:" << std::endl;
	randomChump("Bob");
	
}