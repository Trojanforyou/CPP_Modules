/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msokolov <msokolov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 19:38:33 by msokolov          #+#    #+#             */
/*   Updated: 2026/03/23 15:33:29 by msokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zombie = zombieHorde(5, "Foo");
	if (zombie == NULL)
	{
		if (zombie)
			delete[] zombie;
		std::cout << "Nope." << std::endl;
		return(0);
	}
	for(int i = 0; i != 5; i++)
	{
		zombie->announce();
		std::cout << std::endl;
	}
	delete[] zombie;
}