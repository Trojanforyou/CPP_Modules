/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msokolov <msokolov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 18:39:49 by msokolov          #+#    #+#             */
/*   Updated: 2026/04/19 12:27:13 by msokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "sed.hpp"

int main(int ac, char **av)
{
    if (ac != 3)
    {
        std::cout << "Program requires 3 Arguments" << std::endl;
        return(0);
    }
    replacer(av[1], av[2], av[3]);
}