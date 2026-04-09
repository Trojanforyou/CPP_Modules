/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msokolov <msokolov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 13:22:38 by msokolov          #+#    #+#             */
/*   Updated: 2026/03/23 13:51:08 by msokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Zombie
{
    private:
        std::string _Name;
    public:
        void announce();
        void SetName(std::string Name);
        
};
void    randomChump(std::string name);
Zombie *newZombie(std::string name);