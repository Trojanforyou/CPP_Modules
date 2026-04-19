/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msokolov <msokolov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 15:54:07 by msokolov          #+#    #+#             */
/*   Updated: 2026/04/19 12:34:48 by msokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl_info.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
		return(0);
	HarlInfo harl;
	int	i = 0;
	i = harl.findIndex(av[1]);
	
	switch (i)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			harl.complain("DEBUG");
			/* fall through */
		case 1:
			std::cout << "[ WARNING ]" << std::endl;
			harl.complain("WARNING");
			/* fall through */
		case 2:
			std::cout << "[ INFO ]" << std::endl;
			harl.complain("INFO");
			/* fall through */
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			harl.complain("ERROR");
			/* fall through */
	}
}