/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msokolov <msokolov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 13:22:42 by msokolov          #+#    #+#             */
/*   Updated: 2026/04/12 14:50:49 by msokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brain.hpp"

Brain::Brain()
{
	std::cout << "Constructor for Brain called" << std::endl;
}
Brain::~Brain()
{
	std::cout << "Destructor for Brain called" << std::endl;
}
Brain::Brain(const Brain &other)
{
	*this = other;
}
Brain &Brain::operator=(const Brain &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = other._ideas[i];
	}
	return(*this);
}
