/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msokolov <msokolov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 13:41:30 by msokolov          #+#    #+#             */
/*   Updated: 2026/03/23 14:06:22 by msokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::SetName(std::string Name)
{
    _Name = Name;
}
void    Zombie::announce()
{
    std::cout << _Name << ":" << "BraiiiiiiinnnzzzZ...";
}