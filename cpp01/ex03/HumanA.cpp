/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msokolov <msokolov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 16:14:20 by msokolov          #+#    #+#             */
/*   Updated: 2026/03/23 17:21:44 by msokolov         ###   ########.fr       */
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
