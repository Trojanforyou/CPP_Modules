/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msokolov <msokolov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 12:10:03 by msokolov          #+#    #+#             */
/*   Updated: 2026/03/24 13:59:07 by msokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

void	Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl; 
}
void	Harl::warning()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void	Harl::info()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." <<  std::endl;
}
void	Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
void	Harl::complain(std::string level)
{
	std::string ptr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	void	(Harl::*funcs[4])(void) = {&Harl::debug, &Harl::info, &Harl::error, &Harl::warning};
	
	for (int i = 0; i < 4; i++)
	{
		if (ptr[i] == level)
		{
			(this->*funcs[i])();
		}
	}
}