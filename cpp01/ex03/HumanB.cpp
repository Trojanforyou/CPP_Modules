/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msokolov <msokolov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 17:00:55 by msokolov          #+#    #+#             */
/*   Updated: 2026/03/23 17:21:32 by msokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

Weapon HumanB::getName()
{
    return(_name);
}
void    HumanB::setWeapon(Weapon &gun)
{
    _gun = &gun;
}
void    HumanB::attack()
{
    std::cout << _name << " attacks with their " << _gun->getType() << std::endl;
}
