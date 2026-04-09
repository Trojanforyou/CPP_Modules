/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msokolov <msokolov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 15:54:41 by msokolov          #+#    #+#             */
/*   Updated: 2026/04/09 13:22:32 by msokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap hero;
	hero = ClapTrap("Hero");
	hero.attack("Bandit");
	hero.beRepaired(4);
	hero.takeDamage(15);
}