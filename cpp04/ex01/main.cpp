/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msokolov <msokolov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 13:18:15 by msokolov          #+#    #+#             */
/*   Updated: 2026/04/12 15:01:13 by msokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
int main()
{
    Dog original;

    original.getBrain()->_ideas[0] = "I am the original dog.";

    std::cout << "Original " << original.getBrain()->_ideas[0] << std::endl;

    Dog copy = original;
    std::cout << "Copy: " << copy.getBrain()->_ideas[0] << std::endl;

    original.getBrain()->_ideas[0] = "My idea has changed!";
    std::cout << "Original new: " << original.getBrain()->_ideas[0] << std::endl;

    std::cout << "Copy'" << copy.getBrain()->_ideas[0] << std::endl;

    return 0;
}