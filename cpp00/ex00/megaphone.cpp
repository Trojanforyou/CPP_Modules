/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msokolov <msokolov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 19:25:55 by msokolov          #+#    #+#             */
/*   Updated: 2026/03/21 11:13:18 by msokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
int main(int ac, char **av)
{
    if (ac < 2)
        std::cout << "LOUD AND UNBEARABLE FEEDBACK NOISE";
    for (int i = 1; av[i]; i++)
    {
        for (int j = 0; av[i][j]; j++)
        {
           std::cout << (char)toupper(av[i][j]);
        }
        std::cout << ' ';
    }
}