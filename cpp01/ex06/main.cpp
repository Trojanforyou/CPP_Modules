/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msokolov <msokolov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 15:54:07 by msokolov          #+#    #+#             */
/*   Updated: 2026/03/24 16:50:22 by msokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl_info.hpp"

int main(int ac, char **av)
{
	HarlInfo harl;
	int	i = 0;
	i = harl.findIndex(av[1]);
	
	switch (i)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			harl.complain("DEBUG");
			break;
		case 1:
			std::cout << "[ WARNING ]" << std::endl;
			harl.complain("WARNING");
			break;
		case 2:
			std::cout << "[ INFO ]" << std::endl;
			harl.complain("INFO");
			break;
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			harl.complain("ERROR");
			break;
	}
}