/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msokolov <msokolov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 11:58:47 by msokolov          #+#    #+#             */
/*   Updated: 2026/03/24 14:02:07 by msokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"
int main(int ac, char **av)
{
	Harl harl;
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("BAD LEVEL");
}