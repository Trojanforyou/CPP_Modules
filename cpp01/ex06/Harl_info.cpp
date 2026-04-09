/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl_info.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msokolov <msokolov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 14:26:21 by msokolov          #+#    #+#             */
/*   Updated: 2026/03/24 16:48:58 by msokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl_info.hpp"

void	HarlInfo::debug()
{
	std::cout << "[ I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do! ]" << std::endl; 
}
void	HarlInfo::warning()
{
	std::cout << "[ I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more! ]" << std::endl;
}
void	HarlInfo::info()
{
	std::cout << "[ I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month. ]" <<  std::endl;
}
void	HarlInfo::error()
{
	std::cout << "[ This is unacceptable! I want to speak to the manager now. ] " << std::endl;
}
void	HarlInfo::complain(std::string level)
{
	std::string	levels[4] = {"DEBUG", "WARNING", "INFO", "ERROR"};

	void	(HarlInfo::*ptr[4])(void) = {&HarlInfo::debug, &HarlInfo::warning, &HarlInfo::info, &HarlInfo::error};
	
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*ptr[i])();
		}
	}
}
int	HarlInfo::findIndex(std::string level)
{
	std::string	levels[4] = {"DEBUG", "WARNING", "INFO", "ERROR"};
	
	for(int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
			return(i);
	}
	std::cout <<  "[ Probably complaining about insignificant problems ]" << std::endl;
	return(-1);
}