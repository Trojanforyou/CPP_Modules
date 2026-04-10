/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msokolov <msokolov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 15:54:41 by msokolov          #+#    #+#             */
/*   Updated: 2026/04/09 13:34:56 by msokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap hero("Hero"); // Создаем ОДИН объект и сразу даем ему имя
	hero.attack("Bandit");
	hero.beRepaired(4);
	hero.takeDamage(15);
}