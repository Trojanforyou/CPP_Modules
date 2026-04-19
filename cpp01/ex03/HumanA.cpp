/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msokolov <msokolov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 16:14:20 by msokolov          #+#    #+#             */
/*   Updated: 2026/04/19 12:24:55 by msokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void    HumanA::attack()
{
	std::cout << _name << " attacks with their " << _gun.getType() << std::endl;
}
std::string	HumanA::getName()
{
	return(_name);
}
HumanA::HumanA(std::string name, Weapon &gun): _name(name), _gun(gun) {}