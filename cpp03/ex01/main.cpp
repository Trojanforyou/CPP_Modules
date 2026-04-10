/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msokolov <msokolov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 16:35:47 by msokolov          #+#    #+#             */
/*   Updated: 2026/04/10 17:30:17 by msokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap sc("bob");
	sc.attack("bandit");
	sc.guardGate();
	sc.beRepaired(10);
	sc.takeDamage(110);
}